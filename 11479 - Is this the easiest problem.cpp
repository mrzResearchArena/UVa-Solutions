// 32 bit signed integer means = long long

#include iostream
#include cstdio
#include algorithm
#define ll long long

using namespace std;

bool isValid(ll a, ll b, ll c)
{
    if ( (a+b  c) && (b+c  a) && (c+a  b) ) return true;
    return false;
}

bool Two_Sides_Equal(ll a, ll b, ll c)
{
    if ( (a == b && c != a && c != b)  (b == c && a != b && a != c)  (c == a && b != c && b != a) ) return true;
    return false;
}

bool No_Sides_Equal(ll a, ll b, ll c)
{
    if (a!=b && b!=c && c!=a) return true;
    else
        return false;
}

bool Equal(ll a, ll b, ll c)
{
    if(a == b && b == c && c == a) return true;
    return false;
}

int main ()
{
    ios_basesync_with_stdio(0);

    ll a, b, c;
    int T;
    cin  T;
    int C=1;

    while (T --)
    {
        cin  a  b  c;

        cout  Case   C   ;

        if (isValid(a, b, c) && Equal(a, b, c))
        {
            cout  Equilateraln;
        }
        else if(! isValid(a, b, c))
        {
            cout  Invalidn;
        }
        else if (isValid(a, b, c) && Two_Sides_Equal(a, b, c))
        {
            cout  Isoscelesn;
        }
        else if(isValid(a, b, c) && No_Sides_Equal(a, b, c))
        {
            cout  Scalenen;
        }

        /*
        Invalid - The three sides can not form a triangle
        Equilateral - All three sides of valid triangle are equal
        Isosceles - Exactly two of the sides of a valid triangle are equal.
        Scalene - No pair of sides are equal in a valid triangle
        */

        C ++;
    }
    return 0;
}
