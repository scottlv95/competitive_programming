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
    int w,d,h;
    cin>>w>>d>>h;
    int a,b,f,g;
    cin>>a>>b>>f>>g;
    // from (f,g) to ___ to (a,b)
    // (f,d)+ (f,0) (w,g) (0,g)
    int c1 = d-g+ abs(f-a) +d-b;
    int c2 = g+ abs(f-a) +b;
    int c3 = w-f +w-a +abs(g-b);
    int c4 = f+a+abs(g-b);
    int maxc = min(c1,c2);
    maxc = min(maxc,c3);
    maxc = min(maxc,c4);
    maxc+=h;
    cout<<maxc<<'\n';


}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}

