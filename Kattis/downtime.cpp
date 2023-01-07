// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
bool isJolly(vi V,int n) {
    int input;
    vector<bool> boolflags(n-1,false);

    for (int i = 0; i<n-1;i++){
        int num = abs(V[i]-V[i+1]);
        if (num>=n || num <=0 || boolflags[num] == true ) {
            return false;
        }
        else {
            boolflags[num] = true;
        }
    }
    return true;
}
int main() {
    string line;
    
    int n,input;
    while (getline(cin,line)){
        vi V;
        stringstream ss(line);
        ss >> n;
        while (ss >> input) {
            V.push_back(input) ;
        }
    if (isJolly(V,n)) {
        cout << "Jolly" << "\n";
    } else {
        cout<< "Not jolly" << "\n";
    }
    }
    return 0;

}


