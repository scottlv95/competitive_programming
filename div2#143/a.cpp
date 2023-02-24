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
    int n,m;
    cin>>n>>m;
    string sn, sm;
    cin>>sn>>sm;
    reverse(sm.begin(),sm.end());
    string c = sn+sm;
    int ck = 0;
    for (int i =0; i<n+m-1;i++){
        if (c[i]==c[i+1]) {
            ck++;
        }
    }
    if (ck<=1) {cout<<"YES\n";}
    else {cout<<"NO\n";}
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

