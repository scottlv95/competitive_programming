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
    cin>> tc;
    while (tc--) {
        ll n,temp;
        cin>>n;
        unordered_map <int, int> freq;
        for (int i = 0; i<n; i++) {
            cin>> temp;
            freq[temp]++;
        } 
    } 
    return 0;

}


