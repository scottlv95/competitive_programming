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
    cin>>n;
    int temp;
    vi cnt(n+1,0);
    int cur= 0;
    int ans = 0;
    set<int> p;
    for (int i = 0; i<n; i++){
        cin>>temp;
        cnt[temp]++;
    }
    for (int i = 0; i<n+1; i++){
        if (cnt[i]>0){
            //check if this person is happy with not going
            // this person must go
            // cout<<"cur: " << cur<< "i: " << i<<'\n';
            if (i>cur && cur+cnt[i]>i) {
                ans++;
            }
            cur += cnt[i];

        }
    }
    ans++;
    cout<<ans<<'\n';
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}


