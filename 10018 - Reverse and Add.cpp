#include <iostream>
#define ll long long

using namespace std;

ll reverse_a_number(ll n)
{
    ll rem = 0;
    while(n!=0)
    {
        rem = rem*10 + n%10;
        n = n/10;
    }
    return rem;
}

int main()
{
    ll n;
    ll C = 0;
    ll test;
    cin >> test;
    while(test --)
    {
        cin >> n;
        while (n != reverse_a_number(n))
        {
            n = n + reverse_a_number(n);
            C ++;
        }
        cout << C << " " << n << "\n";
        C = 0;
    }
    return 0;
}
