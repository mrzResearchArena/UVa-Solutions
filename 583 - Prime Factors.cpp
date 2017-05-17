#include <iostream>
#include <algorithm>
#define SZ 1000
#include <cmath>

using namespace std;

void SEND(int n)
{

    if (n < 0)
    {
        n = -n;
        cout << "-1 x ";
    }

    int upto = sqrt(n);

    for(int i=2; i<=upto; i++)
    {
        if (n%i == 0)
        {
            while(n%i == 0)
            {
                n = n/i;
                if (n == 1)
                {
                    cout << i;
                }
                else
                    cout <<  i << " x ";
            }
        }
    }
    if (n != 1)
    {
        cout << n;
    }

}

int main()
{
    int n;
    while(cin >> n && n != 0)
    {
        cout << n << " = ";
        SEND(n);
        cout << "\n";

    }
    return 0;
}
