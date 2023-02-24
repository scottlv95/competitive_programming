// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define FASTIO                \
    ios ::sync_with_stdio(0); \
    cin.tie(0);               \
    cout.tie(0);
void solve() {
    ll n,m,d;
    cin>>n>>m>>d;
    // two cases take the MINIMUM of the two

    //inverse look vector
    vi r(n+1);
    vi ms;
    vi l;
    ll temp;
    for (int i = 1; i<n+1; i++){
        cin>>temp;
        r[temp] = i;
    }

    for (int i = 0; i<m;i++){
        cin>>temp;
        ms.push_back(temp);
        l.push_back(r[temp]);
    }
    ll minDiff = 1e14+5;
    ll maxDiff = 0;
    for (int i = 0; i<m-1; i++){
        ll d = l[i+1]-l[i];
        if (d<minDiff) {minDiff = d;}
        if (d>maxDiff) {maxDiff = d;}
    }
    ll ret;
    // ret = min(minDiff, d-maxDiff);
    if (minDiff<=0 || maxDiff>d){cout<<0<<'\n'; return;}
    if (d >= n-1) {cout<<minDiff<<'\n'; return;}
    ret = min(minDiff, d-maxDiff+1);
    cout<<ret<<'\n';

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

