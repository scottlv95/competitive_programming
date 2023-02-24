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
    int n, k,temp;
    cin>>n>>k;
    vi a(n);
    vi bflag(n,0);
    unordered_map<char,vector<int>> occur;
    for (int i = 0; i<n;i++){
        cin>>temp;
        a[i] = temp;
        occur[temp].push_back(i);
    }

    for (int i = 0; i<n;i++){
        cin>>temp;
        if (temp==a[i]){bflag[i] = 1;}
    }
    vi newbflag = bflag;
    
}

ll calc(vi bflag) {
    int c = 0;
    ll ret=0;
    for (int i = 0; i<bflag.size();i++){
        if (i==bflag.size()-1) {
            c += bflag[i];
            ret += (c*(c+1)/2);
        }
        else if (bflag[i] == 0) {ret+=(c*(c+1)/2);}
        else {c++;}
    }
    return ret;
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

