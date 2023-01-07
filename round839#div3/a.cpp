// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int value(char c) {
    return c-'0';
}
int main() {
    int tc;
    ll a, b; 
    string s;
    cin>>tc;
    while (tc--){
        cin>> s;
       cout<< value(s[0])+value(s[2])<< '\n'; 
    }


    return 0;
}


