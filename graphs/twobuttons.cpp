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
    int x,y;
    int count = 0;
    cin>>x>>y;
    // /2 if even , +1 if odd, +1 i
    while (y != x) {
        if (y<x) {
            count += (x-y);
            break;
        }
        if (y%2 ==1) {
            y+=1;
            count+=1;
        }
        else {
            y/=2;
            count+=1;
        }
    } 
    cout<< count;
    return 0;

}

