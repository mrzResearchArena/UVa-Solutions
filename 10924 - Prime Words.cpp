Critical Input : a
a = 1 is prime here. (ha-ha-ha !!!);


#include <iostream>
#include <cmath>

using namespace std;

bool isLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return true;
    return false;
}

bool isPrime(int n)
{
    int square_root = sqrt(n);

    if (n == 2 ||n == 1) return true;
    else if (n % 2 == 0) return false;
    else if ( n < 0 ) return false;
    else
    {
        for (int i=3; i<=square_root; i = i+2)
        {
            if (n % i == 0) return false;
        }
        return true;
    }
}

int main()
{
    string box;
    int sum = 0;
    while(getline(cin, box))
    {
        for (int i=0; box[i]; i++)
        {
            if (isLower(box[i]))
                sum = sum + (box[i]-96);
            else
                sum = sum + (box[i]-64)+26;
        }

        if (isPrime(sum))
        {
            cout << "It is a prime word.\n";
        }
        else
        {
            cout << "It is not a prime word.\n";
        }
        sum = 0;
    }
    return 0;
}
