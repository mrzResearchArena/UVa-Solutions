#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[100+10];
    int sum = 0;
    int C = 0;
    int test;
    cin >> test;
    getchar();

    while(test --)
    {
        gets(a);
        for (int i=0; a[i]; i++)
        {
            if (a[i] == 'a' || a[i] == 'd' || a[i] == 'g' || a[i] == 'j' || a[i] == 'm' || a[i] == 'p' || a[i] == 't' || a[i] == 'w' || a[i] == ' ')
            {
                sum = sum + 1;
            }
            else if (a[i] == 'b' || a[i] == 'e' ||a[i] == 'h' ||a[i] == 'k' ||a[i] == 'n' ||a[i] == 'q' ||a[i] == 'u' ||a[i] == 'x')
            {
                sum = sum + 2;
            }
            else if (a[i] == 'c' ||a[i] == 'f' ||a[i] == 'i' ||a[i] == 'l' ||a[i] == 'o' ||a[i] == 'r' ||a[i] == 'v' ||a[i] == 'y')
            {
                sum = sum + 3;
            }
            else if (a[i] == 's' || a[i] == 'z')
            {
                sum = sum + 4;
            }
        }
        printf("Case #%d: %d\n", ++C, sum);
        sum = 0;
    }
    return 0;
}
