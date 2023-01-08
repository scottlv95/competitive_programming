// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


vector<bool> visited;
vector <vi> AL;
vector<bool> cat;
int m;

void dfs(int node, int tolerance ) {
    // if (tolerance>m) {
    //     return;
    // }
    // cout<<node<< " hi ";
    visited[node] = 1;
    vi neighbours = AL[node];
    for (int neighbour : neighbours) {
        int newTol = tolerance;
        if (cat[neighbour]==1) {
            newTol += 1;
            // cout<<newTol<<' ';
        }
        else {
            newTol = 0;
        }
        if (newTol<=m && !visited[neighbour]) {
            // cout<<"n: "<<m << ' ';
            dfs(neighbour,newTol);
        }
    }
    return;

}

int main() {
    int n,temp;
    cin>> n>>m;
    AL.resize(n+1,vi {});
    visited.resize(n+1,0);
    cat.resize(n+1,0);

    for (int i=1; i<=n; i++) {
        cin>>temp;
        cat[i]= temp;
    } 
    
    for (int i=0; i<n-1; i++) {
        int x,y;
        cin>>x>>y;
        AL[y].push_back(x);
        AL[x].push_back(y);
        }
    if (cat[1]) {
        dfs(1,1);
    }
    else {
        dfs(1,0);
    }
    int ret = 0;
     
    for (int i = 1; i<=n; i++) {
        if (AL[i].size() == 1 && i!=1) {
            if (visited[i]) {
            //    cout<<i<<',';
                ret++;
            }
        }    

    }
    // for (int k : AL[2]) {
    //     cout<<k;
    // }
    cout<<ret;
    return 0;

}

