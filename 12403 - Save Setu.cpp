#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <iomanip>
#include <string>
#include <sstream>

#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>

#define SZ 1000
#define ll long long

using namespace std;

int main()
{
    string input;
    int T;
    cin >> T;
    int sum = 0;
    int BDT = 0;
    getchar();
    while(T --)
    {
        cin >> input;
        if(input == "donate")
        {
            cin >> BDT;
            sum = sum + BDT;
        }
        else
        {
            cout << sum << endl;
        }
    }
    return 0;
}
