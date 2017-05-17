NOTE :
v.clear(), is the most important function here.
If you don't claer vector, you might be seen unexpected result. 

#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <iterator>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    int rem;
    vector <int> v;
    int C = 0;
    while (cin >> n && n!=0)
    {
        while(n!=0)
        {
            rem = n % 2;
            v.push_back(rem);
            n = n/2;
            if (rem % 2 == 1) C ++;
        }

        cout << "The parity of ";;
        reverse(v.begin(), v.end());
        for(unsigned i=0; i<v.size(); i++)
        {
            cout << v[i];
        }
        cout << " is " << C <<  " (mod 2).\n";
        v.clear();
        C = 0;

    }


    return 0;
}
