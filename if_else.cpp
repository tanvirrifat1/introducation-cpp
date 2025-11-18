#include <iostream>
using namespace std;

int main()
{

    int day;

    cin >> day;

    switch (day)
    {
    case 1:
        cout << "One\n";
        break;

    case 2:
        cout << "two\n";
        break;

    case 3:
        cout << "three\n";
        break;

    default:
        cout << "Invalid day\n";
    }

    return 0;
}