// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
int main() {

    ll tc;
    cin>>tc;
    while(tc--){
        ll n ,k;
        cin>>n>>k;

        ll cur = 1;
        ll num;
        for (int i =0; i<n;i++) {
            cin>>num;
            if (num==cur) {
                cur ++;
            }
        }
        cur --;
        ll ans = ceil((n-cur+0.0)/k);
        cout<<ans<<'\n';
    }


    return 0;

}

