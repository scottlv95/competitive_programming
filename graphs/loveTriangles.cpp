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
        ll n,temp;
        cin>>n;
        unordered_map <int,int> rs;
        for (int i=1; i<n+1;i++) {
            cin>> temp;
            rs[i]= temp;
        }
        for (int i = 1; i<n+1; i++) {
            if (rs[rs[rs[i]]] == i) {
                cout<< "YES\n" ;
                return 0;
            }
        }
        cout<<"NO\n";


    
    return 0;

}