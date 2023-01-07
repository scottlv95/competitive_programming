// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int solve(int n, vi s) {
    int right = 100000000;
    int left = 1;

    for (int i=0; i<n-1;i++){
        if (s[i]<s[i+1]) {
            right = min((s[i]+s[i+1])/2,right);
            // cout<< " r =" <<right ;
        }
        else if (s[i]>s[i+1]) {
            int newleft = ceil((s[i]+s[i+1]+0.0)/2);
            left = max(left,newleft);
            // cout<< " l = "<<left ;
        }
        // cout<< ' ';
    }
    if (left>right) {
        return -1;
    }
    else {
        return (left+right)/2;
    }

}


int main() {
    int tc;
    cin>> tc;
    while(tc--){
        int n,temp;
        vi s;
        cin>> n ;
        for (int i=0;i<n;i++){
           cin>>temp;
           s.emplace_back(temp); 
        }
        cout<<solve(n,s)<<'\n';
        
    } 

    return 0;

}


