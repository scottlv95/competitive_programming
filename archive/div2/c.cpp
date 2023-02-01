// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
const ll inf = 1e17;
const ll MAXM = 1e5;

vector<vector<ll>> factors(MAXM + 5,vi {});

void init()
{
    for (ll i = 1; i <= MAXM; i++)
    {
        for (ll j = i; j <= MAXM; j += i)
        {
            factors[j].push_back(i);
        }
    }
}

void solve() {
    
    ll n,m;
    cin>>n>>m;

    ll min_diff = 1e17;
    vi freq(m+4,0);
    vi smartness(n);
    ll count = 0;
    ll left = 0;

    for (int i = 0; i<n; i++)
        {

            cin>>smartness[i];
            
        }
    sort(smartness.begin(),smartness.end());
    // for (int i = 0; i<n; i++)
    //     {
    //         cout<<smartness[i]<<'|';

            
    //     }

    for (int i = 0; i<n; i++) {
        for (auto x: factors[smartness[i]]) {
            if (x>m) {
                break;
            }
            if (++freq[x]==1) {
                count++;
            }
            // cout<<count<< ' ';
        }

        while (count == m) {
            ll newdiff = smartness[i] - smartness[left];
            if (newdiff<min_diff) {
                min_diff = newdiff;
            }
            // cout<<"hi";
            for (auto x: factors[smartness[left]]) {
                if (x>m) {break;}
                if ( --freq[x]==0) {
                    count--;
                }

            }
            // cout<<count<< 'a';
            left ++;

        }
    } 
    cout<< 
    // min_diff<<

    (min_diff>=inf ? -1 : min_diff)<< 
    '\n';
}
int main() {
    
    int tc;
    cin>>tc;
    init();
    while(tc--) {
        solve();
    } 
    return 0;

}


