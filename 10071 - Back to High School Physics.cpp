
#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    LL u;
    LL t;
    LL reserved;

    while(cin >> u >> t)
    {
        reserved = u * (2*t);
        cout << reserved << "\n";
    }

    return 0;
}

_________________________________________________________________________________________________
We know that, S = ut + 0.5 * a * t^2      and      a = (v-u) / t   ; 
_________________________________________________________________________________________________

When,
uniform-acceleration : S = 0.5 * a * t^2	OR       // Just, acceleration thakbe ..... (u = 0)
                                            S = 0.5 * v * t   ;

uniform-velocity : S = ut                               // Just, velocity thakbe ..... (a = 0)

_________________________________________________________________________________________________


If, constant-acceleration
then, a = 0;
So, S = ut;

If, constant-velocity  |OR|  initial velocity is zero.
then, u = 0;
So, S = 0.5 * a * t^2  ;

__________________________________________________________________________________________________

Acceleration, a = ((v-u) / t) = ((v^2 - u^2) / 2S) = (2(S-ut) / t^2)  ;
__________________________________________________________________________________________________
                
                


