#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "Enter a grade (A-F): ";
    cin >> grade;

    cout << "Corresponding grade is: ";
    switch (grade)
    {
    case 'A':
        cout << "10!" << endl;
        break;
    case 'B+':
        cout << "9!" << endl;
        break;
    case 'B':
        cout << "8!" << endl;
        break;
    case 'C+':
        cout << "7!" << endl;
        break;
    case 'C':
        cout << "6!" << endl;
        break;
    case 'D':
        cout << "5!" << endl;
        break;
    case 'F':
        cout << "Failed!" << endl;
        break;
    default:
        cout << "Invalid grade entered." << endl;
    }

    return 0;
}
