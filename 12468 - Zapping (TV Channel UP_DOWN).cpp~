#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    int b;
    while(cin >> a >> b)
    {
        if (a == -1 && b == -1) break;

        if (a > b) swap(a, b);

        int differ = a-b;
        if (differ < 0) differ = differ*(-1);

        int ClockWise = differ;

        int AntiClockWise = (a-0) + (99-b) +1;

        cout << min(ClockWise, AntiClockWise) << endl;

    }
    return 0;
}


/// Another Solution : ( Shahab, vi_ )

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    int b;
    while(cin >> a >> b)
    {
        if (a == -1 && b == -1) break;

        if (a > b) swap(a, b);

        int ClockWise = b-a;

        int AntiClockWise = (a - b) + 100;

        cout << min(ClockWise, AntiClockWise) << endl;

    }
    return 0;
}

/// Another Solution Step by Step ...


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int a;
    int b;
    while(cin >> a >> b)
    {
        if(a == -1 and b == -1) break;

        int Step1 = abs(a-b);
        int Step2 = (100-a) + b;
        int Step3 = a + (100-b);

        cout << min(Step1, min(Step2, Step3)) << nl;
    }
    return 0;
}


