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
    int n ;
    ll temp;
    cin>>n;
    ll sol=1;
    for (int i = 0 ; i<n; i++){
       cin>>temp;
       sol*=temp;
    }
    sol+=(n-1);
    sol*=2022;
    cout<<sol<<'\n';
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();

    } 
 
}
