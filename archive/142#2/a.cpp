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

    int n,temp;

    int count = 0 ;

    cin>>n;

    vi nums(n);

    for (int i = 0 ;i<n;i++){
        cin>>temp;
        nums[i]=temp;
        if (temp==1) {
            count ++;
        }
    }
    // sort(nums.begin(),nums.end());
    int ret = n;
    ret -= count/2 ;
    cout<<ret<<'\n';



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