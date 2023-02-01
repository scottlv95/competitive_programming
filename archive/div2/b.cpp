// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const ll MOD = 1e9+7;

void solve() {
    ll n;
    cin>>n;
    ll ret=1;
    for (int i = 1; i<=n;i++){
        ret*=i;
        ret=ret%MOD;
    }
    ret*=n;
    ret=ret % MOD;
    ret*=(n-1);
    ret=ret % MOD;
    cout<<ret<<'\n';

}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}


