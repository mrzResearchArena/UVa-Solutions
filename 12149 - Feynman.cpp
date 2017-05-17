/// result = 1/6 x n x (n+1) x (2n+1);

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    while(true)
    {
        cin >> n;
        if (n == 0) break;

        for (int i=1; i<=n; i++)
        {
            sum = sum + i*i;
        }
        cout << sum << "\n";
        sum = 0;
    }
    return 0;
}
