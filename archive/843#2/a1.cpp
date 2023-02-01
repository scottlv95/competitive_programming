// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;
    string sub = s.substr(1,s.length()-2);
    // first construct if a exist in the middle then done
    size_t index = sub.find('a');
    if (index != string::npos) {;
        index ++;
        cout<<s.substr(0,index)<<" a "<<s.substr(index+1, s.length());
    }
    else {
        cout<<s[0]<<' '<<s.substr(1,s.length()-2)<< ' ' <<s[s.length()-1];
    }
    cout<<'\n';
}

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;

}

