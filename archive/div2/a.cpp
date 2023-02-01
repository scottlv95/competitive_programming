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
    int n,temp;
    cin>>n;
    int region = 1;
    cin>>temp;
    bool isEven = temp%2==0;
    for (int i = 1; i < n; i++){
        cin>>temp;
        if (isEven) {
            if (temp%2==1){
                isEven = false;
                region++;
            }
        } 
        else {
            if (temp%2==0){
                isEven = true;
                region++;
            }
        }
    }
    cout<<n-region<<'\n';
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}


