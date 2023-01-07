// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


bool solve(int n,vi s){
    bool asc=true;
    bool dsc=true;
    for (int i = 0; i<n-1;i++ ) {
        if (s[i]>s[i+1] ){
           asc=false; 
        }
        else if (s[i]<s[i+1]){
            dsc = false;
        }
    }
    if (asc||dsc) {
        return true;
    }

    // valley
    int count = 0;
    int cur_direction = -1; //decreasing
    for (int i =0; i<n-1;i++){
        if (cur_direction==-1 && s[i+1]>s[i]){
            count ++;
            cur_direction = 1;
        }      
        else if (cur_direction ==1 && s[i+1]<s[i]){
            count++;
            cur_direction = -1;
        }
    }
    if (count <= 1) {
        return true;
    }
    return false;
}


int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        vi s;
        int n,temp;
        cin>>n;
        for (int i=0; i<n;i++) {
            cin>>temp;
            s.emplace_back(temp);
        }
        if (solve(n,s)){
            cout<< "YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }


    return 0;

}


