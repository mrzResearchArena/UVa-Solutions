_____________________________________________________________________
if a, b, c
be the three lenght of a triangle.
then Perimeter, 2S = a+b+c;
then Area, A = sqrt ( S x (S-a) x (S-b) x (S-c) ) ;
-----------------------------------------------------------------------

if a, b, c
be the length of three medians of a triangle.
then Perimeter, 2S = a+b+c;
then Area, A = 4/3 x sqrt ( S x (S-a) x (S-b) x (S-c) ) ;
-----------------------------------------------------------------------
_____________________________________________________________________


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
   double a, b, c;
    while(cin >> a >> b >> c)
    {
        double S = (a+b+c) * 0.5;
        double Area = (4.00/3.00) * sqrt( S*(S-a)*(S-b)*(S-c) );
        if(Area > 0.0)
        {
            printf("%0.3lf\n", Area);

        }
        else
            cout << "-1.000" << endl;
    }
    return 0;
}
