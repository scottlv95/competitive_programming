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
    int n,t,temp;
    int cur = 1;
    vi s;
    cin>>n>>t;
    n--;
    
    for (int i = 0; i<n; i++) {
        cin>>temp;
        s.push_back(temp);
    } 
    while (cur <= n+1 && cur<=t ) {
        if (cur==t) {
            cout<<"YES";
            return 0;
        }
        cur += s[cur-1];
    }
    cout<<"NO";
    return 0;

}

