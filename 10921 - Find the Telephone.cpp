#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int number(char ch)
{
    if(ch == 'A' or ch == 'B' or ch == 'C') return 2;

    if(ch == 'D' or ch == 'E' or ch == 'F') return 3;

    if(ch == 'G' or ch == 'H' or ch == 'I') return 4;

    if(ch == 'J' or ch == 'K' or ch == 'L') return 5;

    if(ch == 'M' or ch == 'N' or ch == 'O') return 6;

    if(ch == 'P' or ch == 'Q' or ch == 'R' or ch == 'S') return 7;

    if(ch == 'T' or ch == 'U' or ch == 'V') return 8;

    if(ch == 'W' or ch == 'X' or ch == 'Y' or ch == 'Z') return 9;

}

void GOTO(string a)
{
    for(int i=0; a[i]; i++)
    {
        if(a[i] == '-' or a[i] == '1' or a[i] == '0') cout << a[i];
        else
        {
            int C = number(a[i]);
            cout << C;
        }

    }
}

int main()
{
    string a;
    while(getline(cin, a))
    {
        GOTO(a);
        cout << endl;
    }
    return 0;
}
