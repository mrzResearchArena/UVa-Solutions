#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    getchar();
    string a;
    while(T --)
    {
        string a;
        cin >> a;
        int len=a.size();
        if(len == 5) cout << "3\n";
        else
        {
            int C=0;
            if(a[0] == 'o') C++;
            if(a[1] == 'n') C++;
            if(a[2] == 'e') C++;

            if(C>=2) cout << "1\n";
            else cout << "2\n";
        }
    }
    return 0;
}
