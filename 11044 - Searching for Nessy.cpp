/// Because, Every Shawod covered in 3x3 Matrix

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T; cin >> T;

    int n;
    int m;
    while(T --)
    {
        cin >> n >> m;
        cout << (n/3)*(m/3) << endl;
    }
    return 0;
}
