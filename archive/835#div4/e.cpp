// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


ll solve(int n,vi s){

    ll indexOffirstZero;
    ll indexoflastones;
    ll num_of_zeros = 0;
    ll num_of_ones = 0;
    ll ans=0;
    vector<ll> p ;
    auto location = find(s.begin(),s.end(),0);
    if (location!=s.end()){
        indexOffirstZero=location-s.begin();
    }
    else {
        return s.size()-1;
    }
    auto location1 = find(s.begin(),s.end(),1);
    if (location1==s.end()){
        return s.size()-1;
    }

    for (int i =0; i<n;i++) {
        if (s[i]==0) {
            num_of_zeros++;
            ans += num_of_ones ;
        }
        else if (s[i]==1) {
            num_of_ones++;
            indexoflastones = i;
        }

    }
    ll newans = 0+ans;
    ll flip0 = ans+num_of_zeros-1-indexOffirstZero;
    ll flip1 = ans + num_of_ones-1-n+indexoflastones+1;
    // cout<<"hi "<<flip1<<" hi";
    ans = max(flip0,flip1);
    ans = max(newans,ans) ;
    return ans;
}
int main() {
    int tc;
    cin>>tc;
    while (tc--) {
       vi s;
        int n,temp;
        cin>>n;
        for (int i=0; i<n;i++) {
            cin>>temp;
            s.emplace_back(temp);
        }
        cout<<solve(n,s)<<'\n';
    } 
    return 0;

}
