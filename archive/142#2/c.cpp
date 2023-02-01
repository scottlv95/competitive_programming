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


// firstly all subsequences, 
//find the max length of the either side, take min of all these lgnth 
void solve() {
    int n,temp;
    cin>>n;
    vi bflag(n+2,0);
    int count = 0;
    for (int i = 0; i<n; i++){
        cin>>temp;
        if (bflag[temp] == 0) {
            bflag[temp+1] = 1;
            count++;
        }
        else {
            bflag[temp] = 0;
            bflag[temp+1] = 1;
        }
    }
    bflag = vi(bflag.begin()+2,bflag.end());
    ll global_ans = 1e17;
    ll low = 1;
    ll hi = 1;

    for (int i = 0; i<n; i++){
        // cout<<bflag[i]<<' ';
        if (bflag[i] == 1) {
            global_ans = min(global_ans,max(low-1, n-hi));
            // cout<<global_ans<< " low: " << low<< " hi: "<< hi<<' ';
            low = i + 2;
            hi = i+2;
        }
        else {
            hi ++;
        }
        



    }
    cout<<global_ans<<'\n';
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

