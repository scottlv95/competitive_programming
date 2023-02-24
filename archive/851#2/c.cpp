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
    int k;
    if (n%2==0) {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    
    k = (3*n+3)/2;
    for (int odd=1;odd<=n;odd+=2){
        cout<<odd<<' '<<k-odd<<"\n";
        k++;
    }
    for (int even=2;even<=n;even+=2){
        cout<<even<<' '<<k-even<<"\n";
        k++;
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

