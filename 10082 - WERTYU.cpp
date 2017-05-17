#include <bits/stdc++.h>
#define nl '\n'
#define all(x) x.begin(), x.end()
#define un unsigned
#define ll long long

using namespace std;

#define sq(x) ((x)*(x))

#define rz return

string reserved="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

char f(char c)
{
    int i=0;
    while(reserved[i])
    {
        if(reserved[i]==c) return reserved[i-1];
        i++;
    }
    return c;
}

vector<char> v;

int main(int argc, char **argv)
{
    string input;
    while(getline(cin, input))
    {
        int i=0;
        while(input[i])
        {
            v.push_back(f(input[i]));
            i++;
        }
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i];
        }
        cout << nl;
        v.clear();
    }
    return 0;
}

