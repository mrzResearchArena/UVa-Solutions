#include <iostream>
#include <bits/stdc++.h>
#define nl '\n'
#define all(x) x.begin(), x.end()

using namespace std;

int main(int argc, char **argv)
{
    string sentence;
    while(getline(cin, sentence))
    {
        stringstream ss(sentence);
        string word;
        int C=0;
        while(ss >> word)
        {
            reverse(all(word));

            if(C==0)
            {
                C=1;
            }
            else cout << " ";
            cout << word;
        }
        cout << nl;
    }
    return 0;
}

