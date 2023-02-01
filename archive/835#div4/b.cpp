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
     int tc;
     cin>>tc;
     while (tc--){
        string s;
        int k;
        cin>>k;
        cin>>s;
        int m =1;
        for (char c : s){
            int i = c-'a'+1;
            // cout<<i<<" hi ";
            m = max(i,m);
        }
        cout<<m<<'\n';
     }
    return 0;

}


