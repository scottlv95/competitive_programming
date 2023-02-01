// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


int pow_two (int k){
    int count = 0;
    while (k>1&&k%2==0) {
        k/=2;
        count++;
    }
    return count;
}

void solve() {
    int n,temp;
    cin>>n;
    int target = n;
    int power  = 0;
    int ans = 0;
    vi v(n,0);
    for (int i = 0; i<n; i++){
        cin>>temp;
        v[i]=pow_two(i+1);
        power += pow_two(temp);
    }
    sort(v.begin(),v.end(),greater<int>());
    for (int i = 0; i<n; i++) {
        if (power>=target){
            cout<<ans<<'\n';
            return;
        }
        power += v[i];
        ans++;
    }
    cout<<-1<<'\n';
}

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}
