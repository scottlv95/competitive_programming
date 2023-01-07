// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
int main() {
    ll N, temp;
    cin >> N;
    vi H, count;
    count.resize(1000001,0);
    for (int i = 0; i<N; i++){
        cin >> temp;

        if (count[temp] == 0){
            count[temp-1]++;
        }
        else {
            count[temp-1] ++;
            count[temp] --;
        }

    }
    int ret = 0;
    for (int i= 0; i<1000001; i++) {
        ret = ret + count[i];
    }
    cout << ret;
    return 0;

}


