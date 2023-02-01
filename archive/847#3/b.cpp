// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define FASTIO                \
    ios ::sync_with_stdio(0); \
    cin.tie(0);               \
    cout.tie(0);
void solve() {
    ll n,s,r;
    cin>>n>>s>>r;
    int stolen = s-r;
    cout<<stolen<<' ';
    n--;
    vi v(n,1);
    r-=n;
    for (int i = 0; i<n; i++){
        if (r<=stolen-1) {
            v[i]+=r;     
            break;
        }
        else {
            v[i]+=(stolen-1);
            r-=(stolen-1);
        }
    }

    for (int i = 0; i<n; i++){
        cout<<v[i]<<' ';
    }
    cout<<'\n';
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

