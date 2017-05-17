#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin >> n;

        if (n == 0) break;
        else if (n >= 101)
        {
            printf("f91(%d) = %d\n", n, n-10);
        }
        else
        {
            printf("f91(%d) = %d\n", n, 91);
        }

    }
    return 0;
}

_____________________________________
_____________________________________
#include <bits/stdc++.h>
#define LL long long

using namespace std;

int f91(int n)
{
    if (n >= 101)
    {
        return n - 10;
    }
    else
    {
        return f91(f91(n+11));
    }

}

int main()
{
    int n;
    while(1)
    {
        cin >> n;
        if (n == 0) break;
        printf("f9(%d) = %d\n", n, f91(n));

    }
    return 0;
}

______________________________________________
______________________________________________