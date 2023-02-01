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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x,y;
    ll ans=0;
    x = a;
    y = a;
    int e = abs(b-c);
    ans += a;
    ans += 2* min(b,c);
    if (a+b+c+d==0) {
        cout<<"0"<<'\n';
        return;
    }
    if (a == 0) {
        cout<<"1\n";
        return;
    }
    if (e > a) {
        ans += a;
        ans++;
    }
    else {
        ans += e;
        a-=e;
        ans += min(d-1,a);
        ans++;
    }
    cout<<ans<<'\n';

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


