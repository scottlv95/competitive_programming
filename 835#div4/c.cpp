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
    int tc;
    cin>>tc;
    while (tc--) {
        priority_queue <int> p;
        vi s;
        int k,temp;
        cin>> k;
        for (int i=0;i<k;i++){
            cin>>temp;
            s.emplace_back(temp);
            p.emplace(temp);
        }
        int first = p.top();
        p.pop();
        int second = p.top();
        
        for (int i=0;i<k;i++){
           if (s[i]==first) {
            cout << first - second<<' ';
           }
           else {
            cout<< s[i] -first<<' ';
           }
        }
        cout<<'\n';

    }
    
    return 0;

}


