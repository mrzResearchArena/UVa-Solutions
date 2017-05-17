#include <iostream>

using namespace std;

int main()
{
    string box;
    int test;
    cin >> test;
    while(test --)
    {
        cin >> box;
        int char_base_number = (box[0]-65)*26*26 + (box[1]-65)*26 + (box[2]-65)*1;

        int number_base_number = (box[4]-48)*10*10*10 + (box[5]-48)*10*10 + (box[6]-48)*10 + (box[7]-48)*1;

        int differ = number_base_number - char_base_number;

        if (differ < 0)
        {
            differ = differ * (-1);
        }

        if (differ <= 100)
        {
            cout << "nice\n";
        }
        else
        {
            cout << "not nice\n";
        }
    }
    return 0;
}
