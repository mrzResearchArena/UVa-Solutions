///
     What is "Emirp number" ???

     if N = 31 then, reversed = 13
     both are prime and different.
     So, 31 is called a emirp number.

     if N = 181 then, reversed = 181
     both are prime, but NOT different.
     So, 181 is NOT a emirp number.
///
   

#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

ll reverse_a_number(ll n)
{
    int rem = 0;
    while(n != 0)
    {
        rem = rem * 10 + n%10;
        n = n/10;
    }
    return rem;
}


bool isPrime(ll n)
{
    ll square_root = sqrt(n);
    if (n == 2) return true;
    else if (n % 2 == 0 || n < 2) return false;
    else
    {
        for (int i=3; i<=square_root; i+=2)
        {
            if (n % i == 0) return false;
        }
    }
    return true;
}


int main()
{
    ll n;

    while(cin >> n)
    {

        if (isPrime(n) && isPrime(reverse_a_number(n)) && n != reverse_a_number(n))  /// if number is n = 181, then Prime. because, reverse is 181. Reverse not gives different prime.
        {
            cout << n << " is emirp." << '\n';
        }
        else if (isPrime(n))
        {
            cout << n << " is prime." << '\n';
        }
        else
        {
            cout << n << " is not prime." << '\n';
        }
    }
    return 0;
}
