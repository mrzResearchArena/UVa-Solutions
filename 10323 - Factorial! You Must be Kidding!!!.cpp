#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    while(cin >> n)
    {

        if(n<0)
        {
            n = -n;
            if(n%2 == 1) cout << "Overflow!" << endl;
            else cout << "Underflow!" << endl;
        }
        else if ( n>=0 and n<=7 )
        {
            cout << "Underflow!" << endl;
        }
        else if(n >= 14 && n <= INT_MAX)
        {
            cout << "Overflow!" << endl;
        }
        else
        {
            if(n == 8) cout << "40320" << endl;
            else if(n == 9) cout << "362880" << endl;
            else if(n == 10) cout << "3628800" << endl;
            else if(n == 11) cout << "39916800" << endl;
            else if(n == 12) cout << "479001600" << endl;
            else if(n == 13) cout << "6227020800" << endl;
        }

    }
    return 0;
}
