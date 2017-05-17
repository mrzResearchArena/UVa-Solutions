/// Style 1 : useing ARRAY ;

#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#define SZ 30000

using namespace std;

/// int *a = (int*)malloc(SZ*sizeof(int));

int main()
{
    int T; cin >> T;
    int a[SZ+10];
    int sum = 0;

    getchar();
    while(T --)
    {
        int n; cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        int best = a[n/2];
        for(int i=0; i<n; i++)
        {
            sum = sum + abs(best - a[i]);
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

/// Style 2 : using VECTOR

#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#define SZ 30000
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    int T; cin >> T;
    getchar();

    int sum = 0;
    while(T --)
    {
        int n; cin >> n;
        int input;
        for(int i=0; i<n; i++)
        {
            cin >> input;
            v.push_back(input);
        }
        sort(v.begin(), v.end());
        int best = v[v.size()/2];
        for(int i=0; i<n; i++)
        {
            sum = sum + abs(best - v[i]);
        }
        cout << sum << endl;
        sum = 0;
        v.clear();

    }
    return 0;
}

