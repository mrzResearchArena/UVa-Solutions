#include <bits/stdc++.h>

using namespace std;

struct node
{
    char box[100+10];
    int data;
};

int C = 0;

int main()
{
    node a[10];
    int test;
    cin >> test;
    int i;
    while(test --)
    {
        for (i=0; i<10; i++)
        {
            cin >> a[i].box >> a[i].data;
        }
        int maxi = a[i].data;
        for (i=0; i<10; i++)
        {
            if (a[i].data > maxi)
            {
                maxi = a[i].data;
            }
        }
        printf("Case #%d:\n", ++C);
        for (i=0; i<10; i++)
        {
            if (a[i].data == maxi)
            {
                printf("%s\n", a[i].box);
            }
        }
    }
    return 0;
}
