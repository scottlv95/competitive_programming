// g++ "$file.cpp" -o "$file"; cat "$file-in.txt" | & ".\$file.exe"
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt
// g++-12 $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

bool solve(ll k, ll n, ll c, ll d, vi coins)
{
    ll ans = 0;
    priority_queue<ll> p, r;
    ll s = 0;
    for (int i = 0; i < n && i< k+1; i++)
    {
        s += coins[i];
    }

    // if d<n;
    
    ll block_of_days = k + 1; // granted k>= n-1
    ll num_of_blocks = d / block_of_days;
    ll remaining_days = d - block_of_days * num_of_blocks;
    // cout<<s<<' ';

    ans += (num_of_blocks * s);
    
    for (int i =0; i< remaining_days && i < n; i++)
    {
        ans += coins[i];
    }
    // cout << "ans :" <<  ans << ' ';
    if (ans >= c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// bool solve(ll k, ll n, ll c, ll d, vi coins) {

// }

ll bin_search(ll n, ll c, ll d, vi coins)
{
    ll left = 0;
    ll right = 1000000;
    ll mid = 0;
    // while (left < right)
    for (int i =0; i<1000;i++)
    {
        mid = (left + right) / 2;
        // cout<< " mid: " << mid;
        if (solve(mid, n, c, d, coins ) && !solve(mid + 1, n, c, d, coins))
        {
            return mid;
        }
        else if (solve(mid, n, c, d, coins))
        {
            left = mid;
            // cout <<"left moved ";
        }
        else
        {
            right = mid;
            // cout <<"right moved ";
        }
    }
    return mid;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, c, d, temp;
        ll s = 0;
        vi coins;
        cin >> n >> c >> d;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            coins.emplace_back(temp);
        }
        sort(coins.begin(),coins.end(),greater<int>());
        for (int i = 0; i < d && i<n; i++)
        {
            s+=coins[i];
        }
        ll left = 0;
        ll right = n;
        if (s >= c)
        {
            cout << "Infinity\n";
        }
        else if (!solve(0, n, c, d, coins))
        {
            cout << "Impossible\n";
        }
        else
        {
            // cout<<"hi\n";
          cout<<bin_search(n,c,d,coins)<<'\n'; 
        }
    }
    // cout<<solve(1,4,20,3,vi {4,5,6,7});
    return 0;
}