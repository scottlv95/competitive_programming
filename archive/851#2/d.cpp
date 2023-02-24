// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long long i64;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
 
template<int P>
struct MInt {
    int x;
    MInt() : x{} {}
    MInt(i64 x) : x{norm(x % P)} {}
    
    int norm(int x) {
        if (x < 0) {
            x += P;
        }
        if (x >= P) {
            x -= P;
        }
        return x;
    }
    int val() const {
        return x;
    }
    MInt operator-() const {
        MInt res;
        res.x = norm(P - x);
        return res;
    }
    MInt inv() const {
        assert(x != 0);
        return power(*this, P - 2);
    }
    MInt &operator*=(const MInt &rhs) {
        x = 1LL * x * rhs.x % P;
        return *this;
    }
    MInt &operator+=(const MInt &rhs) {
        x = norm(x + rhs.x);
        return *this;
    }
    MInt &operator-=(const MInt &rhs) {
        x = norm(x - rhs.x);
        return *this;
    }
    MInt &operator/=(const MInt &rhs) {
        return *this *= rhs.inv();
    }
    friend MInt operator*(const MInt &lhs, const MInt &rhs) {
        MInt res = lhs;
        res *= rhs;
        return res;
    }
    friend MInt operator+(const MInt &lhs, const MInt &rhs) {
        MInt res = lhs;
        res += rhs;
        return res;
    }
    friend MInt operator-(const MInt &lhs, const MInt &rhs) {
        MInt res = lhs;
        res -= rhs;
        return res;
    }
    friend MInt operator/(const MInt &lhs, const MInt &rhs) {
        MInt res = lhs;
        res /= rhs;
        return res;
    }
    friend std::istream &operator>>(std::istream &is, MInt &a) {
        i64 v;
        is >> v;
        a = MInt(v);
        return is;
    }
    friend std::ostream &operator<<(std::ostream &os, const MInt &a) {
        return os << a.val();
    }
};
const int MOD = 1e9+7;

#define FASTIO                \
    ios ::sync_with_stdio(0); \
    cin.tie(0);               \
    cout.tie(0);
void solve() {
    MInt<MOD> ans = 0;
    vector<MInt<MOD>> pw(3010);
    pw[0] = 1;
    for(int i=1;i<=3000;i++) pw[i] = pw[i-1] * 2;

    ll ret=0;
    int n;
    cin>>n;
    vi dots(n);
    for (int i = 0; i<n;i++){
        cin>>dots[i];
    }

    int x;
    for (int i = 0; i<n-1; i++){
        for (int j = i+1; j<n; j++){
            x = dots[j]-dots[i];   
            // bin search left and right

            //left
            int low,high;
            int mid;
            int highestleft=-1;
            low = 0;
            high = i-1;
            while (true) {
                mid = (low+high)/2;
                if (mid == 0 && dots[i]-dots[mid]<=x){
                    break;
                }
                if (dots[i]-dots[mid]>x && dots[i]-dots[mid+1]<=x){
                    highestleft = mid;
                    break; 
                }
                else if (dots[i]-dots[mid]<=x) {
                    high = mid-1;
                }
                else if (dots[i]-dots[mid]>x) {
                    low = mid+1;
                }
            }
            low = j+1;
            high = n-1;
            int lowestright=n;
            while (true) {
                mid = (low+high)/2;
                    // cout<<low<<' '<<high<<' ';
                if (mid == n-1 && dots[mid]-dots[j]<x){
                    break;
                }
                if (dots[mid]-dots[j]>=x && dots[mid-1]-dots[j]<x){
                    lowestright = mid;
                    break; 
                }
                else if (dots[mid]-dots[j]>=x) {
                    high = mid-1;
                }
                else if (dots[mid]-dots[j]<x) {
                    low = mid+1;
                }
            }
            

            ll p = highestleft+1+n-lowestright;
            ans +=pw[p];

        }
    }

            cout<<ans;

}

int main() {
    FASTIO
    solve();
    return 0;

}

