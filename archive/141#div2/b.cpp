// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

void solve(int n) {
    vector<vi> matrix;
    matrix.resize(n,vector<int>(n,0));
    int small = 1;
    int big = pow(n,2);
    for (int i = 0; i<n; i++) {
        matrix[i][i] = small;
        small++;
    }
    for (int i = 0; i<n-1; i++) {
        matrix[i+1][i] = big;
        big--;
    }

    for (int i = 0; i<n-2; i++) {
        matrix[n-i-1][n-3-i] = big;
        big --;
        matrix[n-3-i][n-i-1] = small;
        small ++;

    }
    for (int i = 0; i<n-1; i++) {
        matrix[i][i+1] = big;
        big --;
    }
    int bigk = n-3;//3
    int smallk =n-4;//2
    //big 
    while (bigk>0){
    for (int i = 0; i<bigk; i++) {
        matrix[bigk-1-i][n-1-i] = big;
        big --;
    }
    bigk-=2;
    }
    while (smallk>0){
    for (int i = 0; i<smallk; i++){
        matrix[i][n-smallk+i]=small;
        small --;
    }
    smallk-=2;
    }
    
    bigk = n-3;//3
    smallk =n-4;//2
        
    while (bigk>0){
    for (int i = 0; i<bigk; i++) {
        // matrix[n-1-i][bigk-1-i]= big;
        // big --;
        matrix[bigk+i][i] = big;
        big --;
    }
    bigk-=2;
    }
    while (smallk>0){
    for (int i = 0; i<smallk; i++){
        // matrix[n-smallk+i][i]=small;
        // small --;
        matrix[n-1-i][smallk-1+i]=small;
        small--;
    }
    smallk-=2;
    }
    
    for (int i = 0; i<n;i++){
        for (int j = 0; j<n; j++){
            cout << matrix[i][j]<<' ';
        }
        cout << '\n';
    }

} 

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        solve(n);
    } 
    return 0;

}
