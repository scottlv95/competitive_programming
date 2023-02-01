#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

void solve() {
    int n;
    char c;
    bool redseen = true ;
    string s;
    cin>>n>>c;
    cin>>s;
    s=s+s;
    ll m = 0;
    ll count = 0;
    auto first = s.find(c);
    for (int i =first; i<2*n;i++){
        if (s[i]==c) redseen = true;
        if (redseen) {
                if (s[i] == 'g'){
                    m = max(m,count);
                    count = -1;
                    redseen=false;
                }
                count ++;
            }
    }
    cout<<m<<'\n';
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}