#include <bits/stdc++.h>
#define LL long long

using namespace std;

//int a[2000000+10];

int main()
{
    int *a = (int*)malloc(2000000*sizeof(int));
    int n;
    while(1)
    {
        scanf("%d", &n);
        if (n == 0) break;
        for (int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        sort(a, a+n);

        int i;
        for (i=0; i<n-1; i++)
        {

            printf("%d ", a[i]);
        }
        printf("%d\n", a[n-1]);
    }
    return 0;
}
