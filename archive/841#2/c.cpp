// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


void solve() {
    ll n,temp;
    cin>>n;
    ll total = ((n*(n-1))/2)+n;
    ll sum = 0;
    vector<ll> prefSum;
    ll a = 0;
    for (int i = 0; i<n; i++) {
        cin>>temp;
        sum = sum ^ temp;
        // cout<<sum<<' ';
        prefSum.push_back(sum);
    }

    
    for (ll i = 0; i*i<(2*n); i++){
        vi m(2*n,0);
        m[i*i]++;
        for (ll j = 0; j<n; j++) {
            a+=m[prefSum[j]];
            // cout<<j<<':'<<a<<'\n';
            ll k = prefSum[j]^(i*i);
            if (k<2*n){
             m[k]++;
            }
        }
    }
    cout<<total-a<<'\n';

}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}


