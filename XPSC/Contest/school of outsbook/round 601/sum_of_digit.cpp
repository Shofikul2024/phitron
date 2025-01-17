#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   00:07:46
    // _File    :  sum_of_digit.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    for (ll t = 1; t <= T; t++)
    {
        ll n;
        cin >> n;

        ll totalSum = 0;
        ll i = 1;
        while (i <= n)
        {
            totalSum += i % 10;
            totalSum += i / 10;
            i++;
        }

        cout << "Case " << t << ": " << totalSum << endl;
    }
    return 0;
}