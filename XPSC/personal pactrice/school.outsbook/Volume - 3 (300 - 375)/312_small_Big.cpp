#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

using namespace std;
// using namespace __gnu_pbds;
// template <typename T> // less -> set and less_equal -> multi_set
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution
{
public:
    void solve()
    {
        ll n, m, o;
        while (cin >> n >> m >> o)
        {
            ll f = min(n, m);
            ll l = min(m, o);
            ll a = min(f, l);
            cout << min(n, a) << br;
        }
    }
};
signed main()
{
    //  _Created :  31 May 2024 ||   23:19:22
    // _File    :  311_Find_Big.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}