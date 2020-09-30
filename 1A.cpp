#include <bits/stdc++.h>
using namespace std;


int main()
{
    typedef long long ll;
    ll n , m , a;
    cin>> n >> m >> a;
    ll e , w ;
    if(m%a==0)
    {

        e = m /a;
    }
    else{
        e = (m/a)+1;

    }
    if(n%a==0)
    {

        w = n /a;
    }
    else{
        w = (n/a)+1;

    }
    cout << (e*w);
}
