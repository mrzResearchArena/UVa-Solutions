#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

void Confirm(int a, int b, int c)
{
    if(a==b and b==c) cout << "*\n";
    else if(a == b and b != c) cout << "C\n";
    else if(b == c and c != a) cout << "A\n";
    else if (c == a and a != b) cout << "B\n";
}

int main()
{
    int a;
    int b;
    int c;

    while(cin >> a >> b >> c)
    {
        Confirm(a, b, c);
    }

    return 0;
}
