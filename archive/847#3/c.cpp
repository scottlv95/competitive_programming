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
bool cmp(pair<int, int>& a,
        pair<int, int>& b)
{
    return a.second < b.second;
}
 
// Function to sort the map according
// to value in a (key-value) pairs
vector<pair<int,int>> msort(unordered_map<int, int>& M)
{
 
    // Declare vector of pairs
    vector<pair<int, int> > A;
 
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }
 
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
    return A;
   
}
void solve() {
    int n;
    int temp;
    cin>>n;
   unordered_map <int,int> count;
    for(int i = 0; i<n; i++){
        for (int j = 0; j<n-1;j++){
            cin>>temp;
            count[temp]+=j;
        }
    }
    vector<pair<int,int>> p = msort(count);
    for (pair<int,int> i : p) {
        cout<<i.first<<' ';
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

