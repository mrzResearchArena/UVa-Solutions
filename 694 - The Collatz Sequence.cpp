#include <bits/stdc++.h>
#define nl '\n'
#define all(x) x.begin(), x.end()
#define un unsigned
#define ll long long

#define sq(x) ((x)*(x))
#define rz return

using namespace std;



void SEND()
{
    ll A;
    ll limit;
    //cin >> A >> limit;
    int CASE=0;
    while(cin >> A >> limit)
    {
        ll storeA = A;
        if(A < 0 && limit < 0) break;
        else
        {
            int C=0;
            while(A!=1)
            {
                if(A&1)
                {
                    A=3*A+1;
                }
                else
                {
                    A=A/2;
                }

                if(A>limit)
                {
                    break;
                }
                else C++;
            }
            cout << "Case " << ++CASE << ": A = " << storeA << ", limit = "
             << limit << ", number of terms = " << C+1 << nl;
        }
    }
}

int main(int argc, char **argv)
{
    SEND();
    return 0;
}

