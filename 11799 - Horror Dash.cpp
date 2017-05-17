#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);

    int a[1000+10] = {0};
    int test;
    int test2;

    int C = 0;

    int maxi;

    cin >> test;
    while(test --)
    {
        cin >> test2;
        for (int i=0; i<test2; i++)
        {
            cin >> a[i];
        }
        maxi = a[0];
        for (int i=0; i<test2; i++)
        {
            if (a[i] > maxi)
            {
                maxi = a[i];
            }
        }
        printf("Case %d: %d\n",++C, maxi);
    }
    return 0;
}
