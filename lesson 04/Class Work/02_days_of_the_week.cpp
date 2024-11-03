#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;

    // Use a switch statement to print the day of the week
    cout << "The day of the week is: ";
    switch (day)
    {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Invalid number. Please enter between 1 and 7." << endl;
    }

    return 0;
}
