// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

// if even then -1 1 -1 1 -1 1...
vi construct_array (int n) {
    vi ret;
        for (int i; i<n/2;i++){
            ret.push_back(1);
            ret.push_back(-1);
        }
    return ret;
}

vi const_odd (int n) {
    vi ret;
    int a,b;
    b = (n-1)/2;
    a = -b+1;
    for (int i =0; i<(n-1)/2; i++){
        ret.push_back(a);
        ret.push_back(b);
    }
    ret.push_back(a);
    return ret;
    //a+b+a+b+a 
    // -1 2 -1 2 -1
    // -2,3,-2,3,-2,3,-2
    //2a+b = 0 
    //3a+2b=0
    // n=5 -> (1,-2)
    // n=7 -> (-2,3)
}

int main() {

    int t;
    int n;
    cin >>t;
    for (int i =0; i<t; i++){
        cin>>n;
        if (n==3){
            cout<< "NO"<<"\n";
        }
        else if (n%2==0) {
            vi c = construct_array(n);
            cout<<"YES"<<endl;
            for (int i=0;i<n;i++){
               cout<<c[i]<<" ";
            }
            cout<<"\n";
        }
        else {
            cout<<"YES"<<endl;
            vi c = const_odd(n);

            for (int i=0;i<n;i++){
               cout<<c[i]<<" ";
            }
            cout<<"\n";
            
        }

    }
    return 0;

}
