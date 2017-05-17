/// Style_1 : Using Stack

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <stack>
#include <algorithm>

using namespace std;

stack <int> S;

int CountDigit(int n)
{
    int C=0;
    int rem;
    while(n!=0)
    {
        rem = n%10;
        n /=10;
        C ++;
    }
    return C;
}

int power(int b, int p)
{
    int result = 1;
    for(int i=1; i<=p; i++)
    {
        result = result * b;
    }
    return result;
}

void Operation(int n)
{
    int reserved = n;
    int rem;
    while(n!=0)
    {
        rem = n%10;
        n/=10;
        S.push(rem);
    }
    int Digit = S.size();
    int sum = 0;
    while(!S.empty())
    {
        sum = sum + power(S.top(), Digit);
        S.pop();
    }

    if(reserved == sum) cout << "Armstrong\n";
    else cout << "Not Armstrong\n";

}

int main()
{
    int T; cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Operation(n);
    }
    return 0;
}

/// Style_2 : using vector

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v;

int CountDigit(int n)
{
    int C=0;
    int rem;
    while(n!=0)
    {
        rem = n%10;
        n /=10;
        C ++;
    }
    return C;
}

int power(int b, int p)
{
    int result = 1;
    for(int i=1; i<=p; i++)
    {
        result = result * b;
    }
    return result;
}

void Operation(int n)
{
    int reserved = n;
    int rem;
    while(n!=0)
    {
        rem = n%10;
        n/=10;
        v.push_back(rem);
    }
    int Digit = v.size();
    int sum = 0;
    while(!v.empty())
    {
        sum = sum + power(v.back(), Digit);
        v.pop_back();
    }

    if(reserved == sum) cout << "Armstrong\n";
    else cout << "Not Armstrong\n";

}

int main()
{
    int T; cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Operation(n);
    }
    return 0;
}



/// Style_3 : Simple Logic ;

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int CountDigit(int n)
{
    int C=0;
    int rem;
    while(n!=0)
    {
        rem = n%10;
        n /=10;
        C ++;
    }
    return C;
}

int power(int b, int p)
{
    int result = 1;
    for(int i=1; i<=p; i++)
    {
        result = result * b;
    }
    return result;
}

void Operation(int Digit, int n)
{
    int sum = 0;
    int rem;
    int reserved = n;
    while(n!=0)
    {
        rem = n%10;
        n/=10;
        sum = sum + power(rem, Digit);
    }
    if(reserved == sum)
    {
        cout << "Armstrong\n";
    }
    else
        cout << "Not Armstrong\n";
}

int main()
{
    int T; cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int Digit = CountDigit(n);
        Operation(Digit, n);
    }
    return 0;
}
