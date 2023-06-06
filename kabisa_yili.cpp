#include <iostream>
using namespace std;
int main()
{
    int yil;
    string text;
    cin >> yil;
    if (yil % 400 == 0)
    {
        text = "Kabisa";
    }
    else
    {
        text = "Kabisa emas";
        if (yil % 4 == 0 && yil % 100 != 0)
        {
            text = "Kabisa";
        }
    }

    cout << text;
}