#include <bits/stdc++.h>

using namespace std;

void sent_TO(int sum, int C)
{
    if (sum >= 90)
        printf("Case %d: A\n", C);
    else if (sum >= 80 && sum <= 89)
        printf("Case %d: B\n", C);
    else if (sum >= 70 && sum <= 79)
        printf("Case %d: C\n", C);
    else if (sum >= 60 && sum <= 69)
        printf("Case %d: D\n", C);
    else
        printf("Case %d: F\n", C);
}

int main()
{
    int C = 0;
    int T1, T2, Final, Attendance; /// CT1, CT2, CT3;
    int box[3];

    int test;
    cin >> test;
    while(test --)
    {
        double sum = 0.0;

        cin >> T1 >> T2 >> Final >> Attendance;

        for (int i=0; i<3; i++)
        {
            cin >> box[i];
        }

        sort(box, box+3);
        sum = T1 + T2 + Final + Attendance + ( ( box[1] + box[2] ) / 2 );

        sent_TO(sum, ++C);

    }
    return 0;
}
