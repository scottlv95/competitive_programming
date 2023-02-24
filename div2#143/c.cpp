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
    priority_queue<ll> pq;
    vi remaining;
    vi drink;
    int n;
    cin>>n;
        int temp;
    for (int i=0;i<n;i++){
        cin>>temp;
        remaining.push_back(temp);
    }
    for (int i=0;i<n;i++){
        cin>>temp;
        drink.push_back(temp);
    }
    for (int i = 0; i<n; i++){
        pq.emplace(remaining[i]);
        ll ans=0;
        priority_queue<ll> newPQ;
        while (!pq.empty()) {
            temp = pq.top();
            if (drink[i]<temp) {
                newPQ.emplace(pq.top()-drink[i]);
                ans+=drink[i];
            }
            else if (drink[i]>=temp){
                ans+=pq.top();
            }
            pq.pop();
        }
        cout<<ans<<' ';
        pq = newPQ;
        // while (!newPQ.empty()){
        //     cout<<newPQ.top()<<' ';
        //     newPQ.pop();
        // }
        
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

