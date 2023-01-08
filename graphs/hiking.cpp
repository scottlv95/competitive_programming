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
    int n,temp ;
    cin>>n;
    vector<vi> AL;
    for (int i = 1; i<n+1; i++) {
        cin>>temp;
        if (i<=n-1) {
            AL[i] = vi {i+1};
        }
        if (temp==0) {
            AL[i].push_back(n+1);
        }
        else {
            AL[n+1].push_back(i);
        }
    }

}

vi dfs(vector<bool> visited, int node, vi traversal,int n, vector<vi> AL) {

    if (traversal.size() == n) {
        return traversal;
    }
    for (int neighbours: AL[n]){
        vi ans = dfs 
    }
    return vi {};

}
int main() {
    int tc;
    cin>>tc;
    while (tc--) {
        solve();
    } 
    return 0;

}