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
    int n, m, temp;
    ll sum=0;
    priority_queue<int,vector<int>,greater<int>> p;
    cin>>n>>m;
    for (int i = 0; i<n; i++){
        cin>>temp;
        p.emplace(temp);
        sum+=temp;
    }
    for (int i = 0; i<m; i++){
        cin>>temp;
        sum-=p.top();
        p.pop();
        sum+=temp;
        p.emplace(temp);
    }
    cout<<sum<<'\n';
    // for (int i = 0; i<n; i++){
    //     cout<<p.top()<<' ';
    //     p.pop();
    // }
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}

