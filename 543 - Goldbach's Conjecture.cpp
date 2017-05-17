#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int n)
{
    int SQ = sqrtl(n);       /// sqrtl( ), is the much effective than sqrt( ).
    if (n == 2) return true;
    else if (n < 1) return false;
    else if (n%2 == 0) return false;
    else
    {
        for (int i=3; i<=SQ; i+=2)
        {
            if (n%i == 0) return false;
        }
    }
    return true;
}



int main()
{
    int n;
    while(cin >> n)
    {
        if (n == 0) break;
        for (int i=2; i<1000000; i++)
        {
            if (isPrime(i) && isPrime(n-i))
            {
                cout << n << " = " << i << " + " << n-i << endl;
                break;
            }
        }
    }

    return 0;
}
