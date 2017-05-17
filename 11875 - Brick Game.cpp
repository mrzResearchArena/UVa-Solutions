#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    int C = 0;
    while (test --)
    {
        int second_test;
        cin >> second_test;
        int box[10+5];

        for (int i=0; i<second_test; i++)
        {
            cin >> box[i];
        }
        //Case 1: 16
        cout << "Case " << ++C << ": " << box[second_test/2] << "\n";
    }
    return 0;
}
