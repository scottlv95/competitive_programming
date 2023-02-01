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
    int n,temp;
    cin>>n;
    vi v(n,0);
    string s;
    
    unordered_map<int, char> m;
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    cin>>s;
    
    for (int i=0;i<n;i++) {
        if (m.find(v[i]) == m.end()){
          m[v[i]] = s[i];
        }
        else {
           if (m[v[i]]!=s[i]) {
            cout<<"NO\n";
            return;
           }
        }
    }
    cout<<"YES\n";
}

int main() {
    int tc;
    cin>>tc;
    while (tc--){
        solve();
    } 
    return 0;

}