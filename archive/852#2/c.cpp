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
    vi num;
    int temp;
    for (int i = 0; i<n; i++){
        cin>>temp;
        num.push_back(temp);
    }
    int left = 0;
    int right = n-1;
    int mn = 1;
    int mx = n;
    while (left<right) {
        if (num[left]==mn) {
            mn++;
            left ++;
        } 
        else if (num[left]==mx) {
            mx--;
            left++;
        }
        else if (num[right]==mn){
            mn++;
            right--;
        }
        else if (num[right]==mx){
            mx--;
            right --;
        }
        else { cout<<left+1<<' '<<right+1<<'\n';
        return;}
    }
    cout<<-1<<'\n';
    
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

