// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


bool solve(int n,vi a, vi b,vi razors) {
    stack <int> s;
    vector <int> count;
    
    for (int i=0; i<n; i++) {
        if (a[i]<b[i]){
            return false;
        }
        while (!s.empty() && s.top()<b[i]){
            s.pop();
        }
        if (a[i]==b[i]) continue;
        if (s.empty() || s.top()>b[i] ){
            count.emplace_back(b[i]);
            s.push(b[i]);
        }
    }
    sort(razors.begin(),razors.end());
    sort(count.begin(),count.end());
    // for (int i =0; i<count.size();i++) {
    //     cout<<count[i]<< " ";
    // }
    if (includes(razors.begin(),razors.end(),count.begin(),count.end())){
        return true;
    }
    else {
        return false;
    }
   
}

int main() {

    int t;
    cin>>t;
    while (t--){
        int n,m,temp;
        vi a,b,razors;
        vi new_a,new_b;
        int newN;
        cin>>n;
        for (int j=0;j<n;j++){
            cin>>temp;
            a.push_back(temp);
        }
        for (int j=0;j<n;j++){
            cin>>temp;
            b.push_back(temp);
        }
        cin>>m;
        for (int j=0;j<m;j++){
            cin>>temp;
            razors.push_back(temp);
        }
       
        if (solve(n,a,b,razors)) {
            cout<< "YES\n";
        }
        else {
            cout<<"NO\n";
        };
    }
    return 0;
}


