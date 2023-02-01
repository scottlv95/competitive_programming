// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const ll MOD = 1e9+7;

void solve() {
    
    ll n;
    cin>>n;
    ll sol;

    if (n%3==0) {
        sol = ((n/3)*(n+1))%MOD;
        sol = sol * (2*n+1) %MOD;
    }
    else if (n%3==1) {
        sol = (((2*n+1)/3)*n)%MOD;
        sol = sol * (n+1) %MOD;
    }
    else {
        sol = (((n+1)/3)*n)%MOD;
        sol = (sol * (2*n+1))%MOD;
    }

    
    sol = sol + MOD - (n*(n+1)/2)%MOD;
    sol = sol%MOD;
    sol*=2022;
    sol = sol % MOD;
    cout<<sol<<'\n';
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}


