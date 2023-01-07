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

    int tc,temp;
    cin>>tc;
    while (tc--) {
    vi s;
        int k =3;
        while (k--) {
            cin>>temp;
            s.emplace_back(temp);
        }
        sort(s.begin(),s.end());
        cout<<s[1]<<'\n';
    }


    return 0;

}


