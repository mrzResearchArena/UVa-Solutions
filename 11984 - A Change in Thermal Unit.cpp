C/5 = (F-32)/9
-------------------------------------

#include <iostream>
#include <cmath>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#define SZ 100

using namespace std;


int main()
{
    int T;
    cin >> T;
    double C;
    double d;
    double F;

    for(int i=0; i<T; i++)
    {
        cin >> C >> d;
        F = (9.00/5.00)*C + 32;
        F = F + d;
        C = (5.00/9.00)*(F-32);

        cout << "Case " << i+1 << ": " << fixed << setprecision(2) << C << endl;

    }
    return 0;
}
