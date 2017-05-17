#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int test;
    int C = 1;
    cin >> test;
    while(test --)
    {
        cin >> a >> b >> c;
        cout << "Case "<< C << ": ";
        if (a <= 20 && b <= 20 && c <= 20)
        {
            cout << "good\n";
        }
        else
            cout << "bad\n";
        C ++;
    }
    return 0;
}
