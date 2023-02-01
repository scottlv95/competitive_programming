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
    int n, k;
    cin>>n>>k;
    int top = n;
    int bot = 1;
    for (int i = 0; i<n; i++){
        if (i%2==0){
            cout<<top<<' ';
            top--;
        }
        else {
            cout<<bot<<' ';
            bot++;
        }
    }
    cout<<'\n';
   
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}


