
#include <bits/stdc++.h>
#define nl '\n'
#define all(x) x.begin(), x.end()
#define un unsigned
#define ll long long
using namespace std;


void SEND()
{
    un ll num_a; /// 1st number
    un ll num_b; /// 2nd number
    while(cin>>num_a>>num_b)
    {
        if(num_a==0 && num_b==0) break;

        int carry=0;
        int C=0;
        int sum=0;
        while(num_a > 0 || num_b > 0)
        {

            sum=(num_a%10)+(num_b%10)+carry;

            if(sum>9)
            {
                C++;
                carry=1;
            }
            else carry=0;

            num_a=num_a/10;
            num_b=num_b/10;
        }
        if(C==0) cout << "No carry operation." << nl;
        else
        {
            if(C==1) cout << "1 carry operation." << nl;
            else cout << C << " carry operations." << nl;
        }
    }

}


int main(int argc, char **argv)
{
    SEND();
    //un ll a;
    return 0;
}

