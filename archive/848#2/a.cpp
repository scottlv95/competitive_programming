// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define FASTIO                \
    ios ::sync_with_stdio(0); \
    cin.tie(0);               \
    cout.tie(0);
void solve() {
    int n;
    cin>>n;
    vi v;
    int temp;
    int s = 0;
    for ( int i = 0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
        s+=temp;
    }
    if (find(v.begin(),v.end(),-1)== v.end()) {
        cout<<s-4<<'\n';
        return;
    }
    for (int i = 0; i<n-1; i++){
        if (v[i]==-1 && v[i+1]==-1) {
            cout<< s + 4<<'\n';
            return;
        }
    }
    cout<< s<<'\n';
}

int main() {
    FASTIO
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}

