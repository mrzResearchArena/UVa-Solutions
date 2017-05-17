#include <iostream>

using namespace std;

bool isAscending(int *box)
{
    for (int i=0; i<9; i++)
    {
        if ( !(box[i] <= box[i+1])  )
        {
            return false;
        }
    }
    return true;
}

bool isDescending(int *box)
{
    for (int i=0; i<9; i++)
    {
        if ( !(box[i] >= box[i+1])  )
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int test;
    cin >> test;
    cout << "Lumberjacks:\n";
    while(test --)
    {
        int box[10] = {0};
        for (int i=0; i<10; i++)
        {
            cin >> box[i];
        }

        if (isAscending(box) || isDescending(box))
        {
            cout << "Ordered\n";
        }
        else
            cout << "Unordered\n";
    }
    return 0;
}
