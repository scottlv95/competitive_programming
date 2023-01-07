// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


// if LLLRRR swap LR (return index of right most L)
// if "RL" exist, then return 0
// if "LLLL" or "RRR" then return -1
int swap_lamp (int n, string s) {

   // check if all same 
   if (s.find_first_not_of(s[0]) == string::npos) {
    return -1;
   }

   for (int i = 0; i<n-1; i++) {
     if ( s[i]=='R' && s[i+1]=='L') {
        return 0;
     }
   }
   for (int i=0; i<n-1; i++) {
    if (s[i]=='L' && s[i+1]=='R'){
        return i+1;
    }
   }
   return 0;
}

int main() {
    
    int k,n;
    string s;
    cin>>k;
    for (int i=0; i<k;i++){
        cin>>n;
        cin>>s;
        cout << swap_lamp(n,s)<<endl;
    }
    return 0;
}


