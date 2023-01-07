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
    int m,n;
    cin>>m>>n;
    unordered_set<int> hashset;
    int temp;
    for (int i =0; i<m;i++){
        cin >> temp;
        hashset.insert(temp);
    }
    int count = 0;

    for(int i = 0; i<n;i++){
        cin>>temp;
        if (hashset.find(temp)!=hashset.end()) {
            count ++;
        }
    }
    cout << count;

    return 0;

}


