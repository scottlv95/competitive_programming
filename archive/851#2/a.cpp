// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
#define FASTIO                \
    ios ::sync_with_stdio(0); \
    cin.tie(0);               \
    cout.tie(0);
void solve() {
    vi prod;
    ll p = 1;
    int count=0;
    int temp;
    int n;
    cin>>n;
    for (int i = 0; i<n;i++){
        cin>>temp;
        if (temp==2) {
            count++;
        }
        prod.push_back(count);
    }
    if (count%2==1) {
        cout<<"-1\n";
        return;
    }
    int f = count/2;
    for (int i = 0; i<n-1; i++){
        if (prod[i]==f) {
            cout<<i+1<<'\n';
            return;
        }

    }
    
}

int main() {
    FASTIO
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}

