// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

bool solve(vector<vi> v, int n, int m, int l) {
    if (l>min(n,m)) {
        return false;
    }
    vector<vi> b(n,vi(m));
    for (int i = 0; i< n; i++){
        for (int j = 0 ; j < m; j++ ){
            if (v[i][j]>=l) {
                b[i][j] = 1;
            }
        }
    }
    // prefixsum
    vector<vi> ps(n+1,vi(m+1,0));
    for (int i = 1; i< n+1; i++){
        for (int j = 1 ; j < m+1; j++ ){
            ps[i][j] = ps [i-1][j] + ps[i][j-1]-ps[i-1][j-1]+b[i-1][j-1];
        }
    }
    // for (int i = 0; i< n+1; i++){
    //     for (int j = 0 ; j < m+1; j++ ){
    //         cout<<ps[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }

    //check off by 1 
    for (int i = l; i< n+1; i++){
        for (int j = l ; j < m+1; j++ ){
            if (ps[i][j]-ps[i-l][j]-ps[i][j-l]+ps[i-l][j-l]==l*l){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int n,m;
        cin>>n>>m;
        vector<vi> v(n, vi (m));
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                cin>>v[i][j] ;
            }
        }
        //bin search
        int left = 2;
        int right = min(n,m);
        int mid;
        if(!solve(v,n,m,2)){
            cout<<1<<'\n';
        }
        else{
        while (true) {
        //     cout<<"left: "<< left<< ' ';
        //     cout<<"right: "<< right<< ' ';
        //     cout<<mid<<' ';
        // cout<<left<<' '<<right<<' ';
            mid = (left+right)/2;
            if (solve(v,n,m,mid)
            &&(!solve(v,n,m,mid+1))
            ){
                break;
            }
            else if (solve(v,n,m,mid)){
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        cout<<mid<<'\n';
}
        // if (solve(v,n,m,1)){
        //     cout<<"YES";
        // }
        // else{
        //     cout<<"NO";
        // }

    } 
    return 0;

}
