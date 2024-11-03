#include <iostream>
using namespace std;

int main()
{
    const float TVSH = 0.2; // Fixed TVSH percentage
    float price, price_with_tvsh;

    cout << "Enter the price: ";
    cin >> price;

    // Calculate price with TVSH
    price_with_tvsh = price + (price * TVSH);

    // Display the price with TVSH
    cout << "Price with TVSH: ALL" << price_with_tvsh << endl;

    return 0;
}
