#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool is__sorted(ll n, vector<ll> &vec, ll b)
{
    int flag=0;
    if (n == 0)
    {
        flag=1;
        return flag;
    }
    ll k = min(vec[0], b - vec[0]);
    for (ll i = 1; i < n; i++)
    {
        ll cur = vec[i];
        ll x= cur;
        ll y = b - cur;
        vector<ll> v;
        if (x>= k)
        {
            v.push_back(x);
        }
        if (y >= k)
        {
            v.push_back(y);
        }

        if (v.empty())
        {
            flag =0;
            return flag;
        }
        k = *min_element(v.begin(), v.end());
    }
    return 1;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v1(n);
        vector<ll> v2(m);
        for (ll i = 0; i < n; i++){
            cin >> v1[i];
        } 
        int b;
        cin>>b; 
        if (is__sorted(n, v1, b)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}