#include <iostream>
using namespace std;

int main()
{
    const int A_GRADE = 91;
    const int B_PLUS_GRADE = 81;
    const int B_GRADE = 71;
    const int C_PLUS_GRADE = 61;
    const int C_GRADE = 51;
    const int D_GRADE = 41;
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= A_GRADE)
    {
        cout << "Grade: A!" << endl;
    }
    else if (score >= B_PLUS_GRADE)
    {
        cout << "Grade: B+!" << endl;
    }
    else if (score >= B_GRADE)
    {
        cout << "Grade: B!" << endl;
    }
    else if (score >= C_PLUS_GRADE)
    {
        cout << "Grade: C+!" << endl;
    }
    else if (score >= C_GRADE)
    {
        cout << "Grade: C!" << endl;
    }
    else if (score >= D_GRADE)
    {
        cout << "Grade: D!" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

    return 0;
}
