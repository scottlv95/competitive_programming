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
        int n, temp;
        int last_index=0;
        cin>>n;
        vi s;
        for (int i = 0; i<n; i++){
            cin>>temp;
            s.push_back(temp);
        }
        sort(s.begin(),s.end(),greater<int>());
        //find last index of s[0] 
        for (int i = 1; i<n; i++) {
            if (s[i] != s[0]) {
                break;
            }
            else {
                last_index = i;
            }
        }

        if (last_index == s.size() - 1) {
            cout << "NO\n";
        }
        else {
         if (last_index > 0) {
            temp = s[last_index+1];
            s[last_index+1] = s[0];
            s[1] = temp;
        }
        cout<< "YES\n";
        for (int i = 0; i<n; i++){
            cout<<s[i]<<' ';       
        }
        cout << '\n';
        }

    }
        return 0;

}


