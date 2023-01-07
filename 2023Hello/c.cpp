// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int num_op (vi nums,int n, int m) {
    ll prefixSumAfter = 0;
    int ret=0;
    priority_queue <ll> a;

    for (int i = m; i<n;i++) {
        if (nums[i]<0){
        a.push(-nums[i]);
        }
        while (prefixSumAfter+nums[i]<0){
            prefixSumAfter += 2* (a.top());
            a.pop();
            ret++;
            // cout <<ret<< " HI ";
        }
        prefixSumAfter=prefixSumAfter+nums[i];
    }

    ll suffixBefore = 0;
    priority_queue <ll> s;
    if (m>1) {
    for (int i =0; i<m-1;i++){
        if (nums[m-1-i]>0){
        s.push(nums[m-1-i]);
        }
        while (suffixBefore + nums[m-1-i]>0) {
            suffixBefore -= 2 * s.top();
            s.pop();
            ret++;
        }
        suffixBefore += nums[m-1-i];
    }
    }
    return ret;
}


int main() {
    int t,n,m;
    cin >>t;
    for (int i=0;i<t;i++){
        vi nums;
        cin>>n>>m;
        for (int j=0;j<n;j++){
            int k;
            cin >> k;
            nums.push_back(k);
        }
        cout <<num_op(nums,n,m)<<"\n";
    }

    return 0;

}

