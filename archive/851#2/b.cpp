// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define FASTIO                \
    ios ::sync_with_stdio(0); \
    cin.tie(0);               \
    cout.tie(0);
void solve() {
    int n;
    cin>>n;
    int a,b;
    a = floor(n/2.0);
    b = ceil(n/2.0);
    int copyb=b;
    int count=0;
    ll ret;
    if (b%10==0) {
        while (copyb%10==0) {
            copyb/=10;
            count++;
        } 
        if (count%2==0) {
             ret = pow(10,count/2)-1;
        }
        else {
             ret = 5*(pow(10,count/2))-1;
        }
        cout<<a-ret<<' '<<b+ret<<'\n';

    }
    else {
        cout<<a<<' '<<b<<'\n';
    }

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

