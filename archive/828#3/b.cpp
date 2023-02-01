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
    int n,q;
    ll temp;
    cin>>n>>q;
    int odd = 0; 
    
    int even = 0;
    // cout<<" odd: " <<odd<<" even: " << even<<' ';
    ll sum=0;
    for (int i = 0; i<n; i++){
        cin>>temp;
        sum+= temp; 
        if (temp%2==0) {
            even ++;
        }
        else {
            odd++;
        }
    }
    for (int i = 0; i<q;i++){
        int x,add;
        cin>>x>>add;
        if (x==0) {
            sum += (even*add);
            if (add%2==1) {
                odd = n;
                even = 0;
            }
            // cout<<sum;
        }
        else {
            sum+=(odd*add);
            if (add%2==1) {
                odd = 0;
                even = n;
            }
            // cout<<sum;
        }
        cout<<sum<<'\n';
    }
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}