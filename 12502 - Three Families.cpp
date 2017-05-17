#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <iomanip>
#include <string>

#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>

#define SZ 1000
#define ll long long

using namespace std;

/*
template <typename DT>
DT power(DT b, DT p)
{
    DT result = 1;
    for(int i=1; i<=p; i++)
    {
        result = result * b;
    }
    return result;
}

template <typename DT>
DT GCD(DT a, DT b)
{
    if (b==0) return a;
    else return GCD(b, a%b);
}

template <typename DT>
DT LCM(DT a, DT b)
{
    return a/GCD(a, b) * b;
}

template <typename DT>
void SWAP(DT *a, DT *b)
{
    DT temp;
    temp = *a;
    *a = *b;
    *b = temp;
}*/

int main()
{

    int T; cin >> T;
    getchar();
    while(T --)
    {
        int x;      /// x = time for (A);
        int y;      /// y = time for (B);
        int z;       /// z = C will pay to all;

        cin >> x >> y >> z;

        int Total_Hour = x+y;
        int Total_Minutes = Total_Hour * 60;
        double Each_Family_Share_in_Minutes = Total_Minutes / 3;
        double A_Family_Extra_Work_in_Minutes = x*60 - Each_Family_Share_in_Minutes;

        int Paying = z * (A_Family_Extra_Work_in_Minutes / Each_Family_Share_in_Minutes);

        cout << Paying << endl;

    }
    return 0;
}
