#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    int n;
    cout << "PERFECTION OUTPUT" << "\n";
    while(cin >> n)
    {

        if(n == 0)
        {
            cout << "END OF OUTPUT" << "\n";
            break;
        }
        else
        {
            ll sum = 0;
            int i=1;
            while(i<=n/2)
            {
                if(n%i==0)
                {
                    sum = sum + i;
                }

                i++;
            }
            if(sum == n)
            {
                    printf("%5d  %s\n", n, "PERFECT");
            }
            else
            {
                if(sum<n)
                {
                    printf("%5d  %s\n", n, "DEFICIENT");
                }
                else printf("%5d  %s\n", n, "ABUNDANT");
            }
        }
    }
    
    return 0;
}
