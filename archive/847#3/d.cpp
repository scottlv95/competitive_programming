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
// void solve() {
//     ll n,temp;
//     vi dolls;
//     ll minDoll = 1e14;
//     ll maxDoll = 0;
//     cin>>n;
//     for (int i = 0; i<n; i++){
//         cin>>temp;
//         minDoll=min(temp,minDoll);
//         maxDoll= max(temp,maxDoll);
//         dolls.push_back(temp);
//     }
//     for (int i = 0; i<n; i++){
//         dolls[i]-=minDoll;
//     }
//     maxDoll-=minDoll;
//     vi count(maxDoll+10,0);
//     for (int i = 0; i<n;i++){
//         count[dolls[i]]++;
//     }
//     ll ret=0;
//     //    for(int i = 0; i<maxDoll+5; i++) {
//     //     cout<<count[i]<<' ';}
//     //     cout<<'\n';
//     for (int i=0; i<maxDoll+5; i++){
//         while(count[i]>0) {
//             // find min
//             int minD = 1e9;

//             for (int j = i; j<maxDoll+5; j++){
//                 if (count[j]==0) {
//                     break;
//                 }
//                 else {
//                     minD = min(minD,count[j]);
//                 }
//             }
//             if (minD == 1e9) {
//                 minD =1;
//             }
//             ret+=minD;
//             for (int j = i; j<maxDoll+5; j++){
//                 if (count[j]>0){
//                     count[j]-=minD;
//                 }
//                 else {
//                     break;
//                 }
//             }
//         }
//     }
//     cout<<ret<<'\n';
// }


void solve () {
    ll n;
    cin>>n;
    unordered_multiset <int> s;
    vi v(n);
    for (int i =0; i<n; i++){
        cin>>v[i];   
    }
    sort(v.begin(),v.end());
    for (int i =0; i<n; i++){
        auto it = s.find(v[i]-1);
        if (it!=s.end()){
            s.erase(it);
            s.emplace(v[i]);
        }
        else {
            s.emplace(v[i]);
        }
    }
    int ret = s.size();
    cout<<ret<<'\n';
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

