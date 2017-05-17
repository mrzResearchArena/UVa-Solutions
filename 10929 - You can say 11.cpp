#include <iostream>

using namespace std;

int main()
{
    string input;
    while(cin >> input)
    {
        if (input == "0") break;

        int sum = 0;
        for(int i=0; input[i]; i++)
        {
            sum = sum + (input[i]-48);
            sum = sum * 10;
            sum = sum % 11;
        }

        if (sum == 0)
            cout << input << " is a multiple of 11.\n";
        else
            cout << input << " is not a multiple of 11.\n";
    }
    return 0;
}
