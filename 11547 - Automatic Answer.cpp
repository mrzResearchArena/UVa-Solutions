#include <bits/stdc++.h>

using namespace std;

int main( )
{
    	int T; cin >> T;
        int n;
        while(T --)
        {
            cin >> n;
            n = n*567;
            n = n/9;
            n = n + 7492;
            n = n*235;
            n = n/47;
            n = n -498;

            if(n<0){
                n = -n;
            }

            n = n/10;
            int rem = n %10;
            cout << rem << "\n";
        }

        return 0;
}

