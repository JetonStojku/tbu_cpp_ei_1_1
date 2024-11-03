#include <iostream>
using namespace std;

int main()
{
    const int COLD_TEMP = 15; // Temperature threshold for cold
    const int WARM_TEMP = 25; // Temperature threshold for warm
    int temp;

    cout << "Enter the temperature in Celsius: ";
    cin >> temp;

    if (temp < COLD_TEMP)
    {
        cout << "It's cold." << endl;
    }
    else if (temp < WARM_TEMP)
    {
        cout << "It's warm." << endl;
    }
    else
    {
        cout << "It's hot." << endl;
    }

    return 0;
}
