#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "a = ";
    cin >> a;
    if (a % 2 == 0)
    {
        if (a > 0)
        {
            cout << "Ha";
        }
        else
        {
            cout << "yo'q";
        }
    }
    else
    {
        cout << "yo'q";
    }
}