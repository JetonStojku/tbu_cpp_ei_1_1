#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14159; // Define constant for PI
    float radius, area;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius; // Calculate area using the PI constant
    cout << "Area of the circle: " << area << endl;

    return 0;
}
