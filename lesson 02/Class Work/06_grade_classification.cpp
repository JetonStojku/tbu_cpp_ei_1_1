// Program to classify student grades based on score

#include <iostream>
using namespace std;

int main()
{
    int score;

    // Ask the user to input their score
    cout << "Enter your score (0 to 100): ";
    cin >> score;

    // Classify the grade based on the score
    if (score > 90) // Score 91-100: Grade A
    {
        cout << "Grade: A\n";
    }
    else if (score > 80) // Score 81-90: Grade B+
    {
        cout << "Grade: B\n";
    }
    else if (score > 70) // Score 71-80: Grade B
    {
        cout << "Grade: B\n";
    }
    else if (score > 60) // Score 61-70: Grade C+
    {
        cout << "Grade: C\n";
    }
    else if (score > 50) // Score 51-60: Grade C
    {
        cout << "Grade: C\n";
    }
    else if (score > 40) // Score 41-50: Grade D
    {
        cout << "Grade: D\n";
    }
    else // Score less or equal than 40: Grade F
    {
        cout << "Grade: F\n";
    }

    return 0;
}

// Key notes:
// 1. The program checks the score and assigns a grade based on the value.
// 2. The grades follow the standard A, B, C, D, F scale.
