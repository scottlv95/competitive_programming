// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


void solve (ll k , ll n ) {
    ll cur = 1;
    ll diff= 1;

    while (true) {
            k--;
        cout<< cur<<' ';
        if (cur + diff + k-1 >n) {
            // cout<<"HI "<< cur<< diff<<k<<" HI";
            break ;
        }
        else {
          cur += diff; 
          diff++;
        }
        if (k==0){
            break;
        }
    }
    while (k--){
        cur ++;
        cout<<cur<<" ";
        
    }

}

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        ll k,n;
        cin>> k>>n;
        solve(k,n); 
        cout<<'\n';
    }    

}