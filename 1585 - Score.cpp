#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    char box[80+10];
    int test;
    int C = 1;
    int sum = 0;
    cin >> test;
    getchar();
    while(test --)
    {
        cin >> box;
        for (int i=0; box[i]; i++)
        {
            if (box[i] == 'X')
            {
                sum = sum + 0;
                C = 1;
            }
            else if (box[i] == 'O' && box[i-1] == 'O')
            {
                ++ C;
                sum = sum + C;
            }
            else
            {
                sum = sum + 1;
            }
        }
        cout << sum << "\n";
        sum = 0;
        C = 1;
    }

    return 0;
}
