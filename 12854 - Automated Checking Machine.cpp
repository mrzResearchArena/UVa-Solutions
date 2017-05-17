This is TLA : It takes more than 1 minutes.

/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int a[5];
    int b[5];
    int C = 0;
    while(true)
    {
        for (int i=0; i<5; i++)
        {
            cin >> a[i];
        }
        for (int i=0; i<5; i++)
        {
            cin >> b[i];
        }
        for (int i=0; i<5; i++)
        {
            if (a[i] == b[i]) break;
            else
                C ++;
        }
        if (C == 5)
            cout << "Y\n";
        else
            cout << "N\n";
        C = 0;
    }

    return 0;
}

*/


This is Accepted : It takes 0.025 minutes.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int a1, a2, a3, a4, a5;
    int b1, b2, b3, b4, b5;
    while(cin >> a1 >> a2 >> a3 >> a4 >> a5 >> b1 >> b2 >> b3 >> b4 >> b5)
    {
        if ( ((a1 == 1 && b1 == 0) || (a1 == 0 && b1 == 1)) &&
            ((a2 == 1 && b2 == 0) || (a2 == 0 && b2 == 1)) &&
            ((a3 == 1 && b3 == 0) || (a3 == 0 && b3 == 1)) &&
            ((a4 == 1 && b4 == 0) || (a4 == 0 && b4 == 1)) &&
            ((a5 == 1 && b5 == 0) || (a5 == 0 && b5 == 1)) )
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}
