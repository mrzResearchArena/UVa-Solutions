
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    ll x;
    while(cin >> x)
    {
        ll C = ( x*(x+1) ) / 2;
        cout << C*C << "\n";
    }
    return 0;
}

