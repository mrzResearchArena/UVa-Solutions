#include <iostream>
#include <string>

using namespace std;

int main()
{
    string box;
    int C=1;
    while(cin >> box && box != "#")
    {
        if (box == "HELLO")
        {
            cout << "Case " << C << ": ENGLISH" << endl;
        }
        else if (box == "HOLA")
        {
            cout << "Case " << C << ": SPANISH" << endl;
        }
        else if (box == "HALLO")
        {
            cout << "Case " << C << ": GERMAN" << endl;
        }
        else if (box == "BONJOUR")
        {
            cout << "Case " << C << ": FRENCH" << endl;
        }
        else if (box == "CIAO")
        {
            cout << "Case " << C << ": ITALIAN" << endl;
        }
        else if (box == "ZDRAVSTVUJTE")
        {
            cout << "Case " << C << ": RUSSIAN" << endl;
        }
        else
        {
            cout << "Case " << C << ": UNKNOWN" << endl;
        }
        C ++;

    }

    return 0;
}
