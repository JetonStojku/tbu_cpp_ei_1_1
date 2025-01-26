/* Exercise 1: Invoice Management Using a Matrix
Problem Statement:
You are given a matrix invoice[n][2], where:
The first column (invoice[i][0]) stores the quantity of a product.
The second column (invoice[i][1]) stores the price per unit of the product.

Write a program that:
Prompts the user to input the number of products (n).
Allows the user to enter the quantity and price for each product.
Calculates and prints the invoice in a tabular format, displaying:
The quantity, price per unit, and total cost (quantity × price) for each product.
The grand total at the bottom (sum of all total costs).
*/

#include <iostream>
using namespace std;

void insertProducts(double invoice[][2], int n)
{
    // Input details for each product
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for product " << i + 1 << ":" << endl;

        cout << "Quantity: ";
        cin >> invoice[i][0]; // Store quantity

        cout << "Price per unit: ";
        cin >> invoice[i][1]; // Store price per unit
    }
}

void printInvoice(double invoice[][2], int n)
{
    // Print the invoice header
    cout << "Invoice:" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "|\tQuantity\t|\tPrice/Unit\t|\tTotal\t|" << endl;
    cout << "---------------------------------------------" << endl;

    double grandTotal = 0; // To store the grand total

    // Calculate and print each product's details
    for (int i = 0; i < n; i++)
    {
        double quantity = invoice[i][0];
        double price = invoice[i][1];
        double total = quantity * price; // Calculate total cost for the product
        grandTotal += total;             // Add to grand total

        // Print the product's details in tabular format
        cout << "|\t" << quantity
             << "\t\t\t|\t" << price
             << "\t\t\t|\t" << total
             << "\t\t|\t" << endl;
    }

    // Print the footer and grand total
    cout << "---------------------------------------------" << endl;
    cout << "Grand Total: " << grandTotal << endl;
}

int main()
{
    int n;

    // Prompt user for number of products
    cout << "Enter the number of products: ";
    cin >> n;

    // Declare a 2D array for the invoice
    double invoice[n][2];

    insertProducts(invoice, n);
    printInvoice(invoice, n);
    return 0;
}
