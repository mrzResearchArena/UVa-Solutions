Critical Input :
6

2
61  10  (Output : Mile 40) ;
3
40  40  40  (Output : Juice 45) ;
2
60  65  (Output : Mile Juice 60) ;
1
119  (Output : Juice 30) ;
2
29  59  (Output : Mile Juice 30) ;
3
29  59  119 (Output : Juice 40) ;
------------------------------------------------------------------------------
------------------------------------------------------------------------------

#include <iostream>
#include <cstdio>
#define ll long long

using namespace std;

int Mile_Package(int *a, int n)
{
    int C = 0;
    int Cut;
    for(int i=0; i<n; i++)
    {
        Cut = a[i];
        while(Cut >= 0)
        {
            Cut = Cut - 30;
            C ++;
        }
    }
    return C*10;
}


int Juice_Package (int *a, int n)
{
    int C = 0;
    int Cut;
    for(int i=0; i<n; i++)
    {
        Cut = a[i];
        while(Cut >= 0)
        {
            Cut = Cut - 60;
            C ++;
        }
    }
    return C*15;
}

int main()
{
    int a[50];
    int T;
    cin >> T;

    int C=1;
    while(T --)
    {
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int Mile = Mile_Package(a, n);
        int Juice = Juice_Package(a, n);

        /*
        Case 1: Mile 40
        Case 2: Juice 45
        Case 3: Mile Juice 60
        */
        cout << "Case " << C << ": ";

        if(Mile < Juice)
        {
            cout << "Mile " << Mile << endl;
        }
        else if (Mile > Juice)
        {
            cout << "Juice " << Juice << endl;
        }
        else
            cout << "Mile Juice " << Juice << endl;

        C ++;
    }
    return 0;
}

