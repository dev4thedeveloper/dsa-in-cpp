#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Write an program to print name of the days according to the entered no.
    like, if we enter 3. Then it will print Wednesday.
    */
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thrusday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
        break;
    }
}