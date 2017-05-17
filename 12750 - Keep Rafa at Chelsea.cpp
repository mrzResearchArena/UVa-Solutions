#include <iostream>

using namespace std;

int main()
{
    int T; cin >> T;
    int upto;
    string a;

    int Case = 1;

    while(T--)
    {
        cin >> upto;
        for(int i=0; i<upto; i++)
        {
            cin >> a[i];
        }

        int C=0;
        for(int i=0; i<upto; i++)
        {
            if(a[i] == 'L' or a[i] == 'D')
            {
                C++;
                if(C == 3)
                {
                    cout << "Case " << Case << ": " << i+1 << endl;
                    C = -1;
                    break;
                }
            }
            else C=0;
        }
        if(C == 1 or C == 2 or C == 0)
        {
            cout << "Case " << Case << ": " << "Yay! Mighty Rafa persists!" << endl;
        }
        Case ++;
        a.clear();
    }
    return 0;
}
