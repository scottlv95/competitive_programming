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
    int n,m,temp;
    cin>>n>>m;
    vector<vi> vs;
    for (int i = 0; i<n;i++){
        vi s;
        for (int j = 0; j<m;j++){
            cin>>temp; 
            s.push_back(temp-1);
        }
        vs.push_back(s);
    }
    // sort(vs.begin(),vs.end());
    vector<vi> inverteds;
    for (int i = 0; i<n;i++){
        //find invert 
        vi inv(m);
        for (int j = 0; j<m; j++) {
            inv[vs[i][j]]=j;
        }
        // for (int j = 0; j<m; j++) {
        //     cout<<vs[i][j]<<' ';
        // }
        // cout<<'\n';
        inverteds.push_back(inv);
        // for (int j = 0; j<m; j++) {
        //     cout<<inv[j]<<' ';
        // }
        // cout<<'\n';
    }
    sort(inverteds.begin(),inverteds.end());
    for (int i = 0; i<n; i++){
        //binary
        int left = 0;
        int right = n-1;
        for (int p=0; p<1000;p++) {
            int mid = (left+right)/2;
            
            if (mid >= n-1) {
                int a=0;
                for (int j = 0; j<m;j++){
                    if (vs[i][j] == inverteds[mid][j]) {
                        a++;
                    } 
                    else {
                        break;
                    }
                }
                cout<<a<<' ';
                break;
            }
             if (vs[i]>inverteds[mid]&&vs[i]<inverteds[mid+1]) {
                int a=0;
                int b = 0;
                for (int j = 0; j<m;j++){
                    if (vs[i][j] == inverteds[mid][j]) {
                        a++;
                    } 
                    else {
                        break;
                    }
                }
                for (int j = 0; j<m;j++){
                    if (vs[i][j] == inverteds[mid+1][j]) {
                        b++;
                    } 
                    else {
                        break;
                    }
                }
                cout<<max(a,b)<<' ';
                break;
            }
            else if (vs[i]>inverteds[mid]) {
                left = mid;
            }
            else if (vs[i]<inverteds[mid]) {
                right = mid; 
            }
            else if (vs[i]==inverteds[mid]) {
                cout<<m<<' ';
                break;
            }
        }
    }
    cout<<'\n';
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


