#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <queue>
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

stack <char> S;

bool SEND(string box)
{
    for(int i=0; box[i]; i++)
    {
        if(box[i] == '(' || box[i] == '[')
        {
            S.push(box[i]);
        }
        else if(box[i] == ')' || box[i] == ']')
        {
            if(S.empty()) return false;

            if( (box[i] == ')' && S.top() == '(') or (box[i] == ']' && S.top() == '[') )
            {
                S.pop();
            }
        }
    }

    if(S.empty()) return true;
    else return false;
}

int main()
{

    int T;
    cin >> T;
    string box;
    getchar();

    while(T --)
    {
        getline(cin, box);
        if(SEND(box))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }

        while(!S.empty())
        {
            S.pop();
        }
    }
    return 0;
}
