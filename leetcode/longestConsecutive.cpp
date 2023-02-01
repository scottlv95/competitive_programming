//g++-12 $file.cpp -std=c++17 -o $file 
#include <bits/stdc++.h>
using namespace std;

    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 0;
        int cur_num;
        int cur_streak;
        unordered_set <int> s;
        for (int i = 0; i<n; i++){
            s.emplace(nums[i]);
        }
        for (int num: nums) {
            if (s.find(num-1)==s.end()){
                cur_num = num;
                cur_streak = 1;
            while (s.find(cur_num+1) != s.end() ){
                cur_num ++;
                cur_streak ++;
            }
            } 
            longest = max (longest,cur_streak);
            
        }
        return longest;
    }

int main() {
    vector<int> v = vector<int>{0,-1};
    
    cout<<longestConsecutive(v);
    return 0;

}