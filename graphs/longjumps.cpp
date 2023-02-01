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
    cin >> tc;
    while (tc--) {
        int n,temp;
        cin>>n;
        vi score(n,0); 
        vi arr(n,0);
        for (int i =0;i<n;i++){
            cin>>arr[i];
        }
        for (int i = 0; i<n; i++){
            int cur_index = n-i;
            if (cur_index + arr[cur_index-1]>n) {
                score[cur_index-1] = arr[cur_index-1];
            }
            else {
                score[cur_index - 1] = arr[cur_index-1] 
                + score[cur_index+arr[cur_index-1]-1];
            }
        }
        cout<<*max_element(score.begin(),score.end())<<'\n';

    }
    
    return 0;

}


