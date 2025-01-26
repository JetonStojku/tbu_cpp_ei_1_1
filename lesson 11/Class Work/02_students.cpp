/*
Exercise: Student Attendance and Performance Tracker
Problem Statement:
You are given a matrix students[n][15], where:

Each row represents a student's attendance and grades.
Each column represents a day of the course (maximum 15 days).
The values in the matrix are defined as follows:
-1: The student was absent on that day.
0: The student was present but did not receive a grade.
4-10: The student was present and received a grade for that day.
Create a program that includes the following functionalities using functions:

Input Attendance and Grades
Allow the user to enter or update the attendance and grades for a specific student and day.
Ensure valid inputs (e.g., -1, 0, or grades between 4 and 10).

Find the Best Student
Identify the student with the highest average grade (only consider days with grades).

Find the Worst Student
Identify the student with the lowest average grade (only consider days with grades).

Find the Student with the Most Absences
Identify the student with the highest number of absences (-1).

Guidelines:
Use a modular approach, implementing each functionality as a separate function.
Ensure proper input validation and display meaningful messages to the user.
Example Output:

Menu:
1. Input Attendance and Grades
2. Find the Best Student
3. Find the Worst Student
4. Find the Student with the Most Absences
5. Exit

Choose an option:
*/

#include <iostream>
using namespace std;

// Constants
const int MAX_DAYS = 15;
const int MAX_STUDENTS = 100;

// Function prototypes
void inputAttendanceAndGrades(int students[MAX_STUDENTS][MAX_DAYS], int numStudents, int student, int day, int value);
int findBestStudent(const int students[MAX_STUDENTS][MAX_DAYS], int numStudents);
int findWorstStudent(const int students[MAX_STUDENTS][MAX_DAYS], int numStudents);
int findStudentWithMostAbsences(const int students[MAX_STUDENTS][MAX_DAYS], int numStudents);

int main()
{
    int numStudents;

    // Ask for the number of students
    cout << "Enter the number of students (up to " << MAX_STUDENTS << "): ";
    cin >> numStudents;

    int students[numStudents][MAX_DAYS] = {0}; // Initialize all elements to 0
    if (numStudents <= 0 || numStudents > MAX_STUDENTS)
    {
        cout << "Invalid number of students. Exiting program.\n";
        return 1;
    }

    int choice;
    do
    {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Input Attendance and Grades\n";
        cout << "2. Find the Best Student\n";
        cout << "3. Find the Worst Student\n";
        cout << "4. Find the Student with the Most Absences\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int student, day, value;
            cout << "Enter the student number (1 to " << numStudents << "): ";
            cin >> student;
            cout << "Enter the day (1 to " << MAX_DAYS << "): ";
            cin >> day;
            cout << "Enter the value (-1, 0, or a grade between 4 and 10): ";
            cin >> value;
            inputAttendanceAndGrades(students, numStudents, student, day, value);
            break;
        case 2:
        {
            int bestStudent = findBestStudent(students, numStudents);
            cout << "The best student is Student #" << bestStudent + 1 << endl;
            break;
        }
        case 3:
        {
            int worstStudent = findWorstStudent(students, numStudents);
            cout << "The worst student is Student #" << worstStudent + 1 << endl;
            break;
        }
        case 4:
        {
            int mostAbsentStudent = findStudentWithMostAbsences(students, numStudents);
            cout << "The student with the most absences is Student #" << mostAbsentStudent + 1 << endl;
            break;
        }
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Please choose a valid option.\n";
        }
    } while (choice != 5);

    return 0;
}

// Function to input attendance and grades
void inputAttendanceAndGrades(int students[][MAX_DAYS], int numStudents, int student, int day, int value)
{
    if (student < 1 || student > numStudents || day < 1 || day > MAX_DAYS)
    {
        cout << "Invalid student or day. Please try again.\n";
        return;
    }

    // Validate value
    if (value < -1 || value > 10 || (value >= 1 && value < 4))
    {
        cout << "Invalid value. Please enter -1, 0, or a grade between 4 and 10.\n";
        return;
    }

    // Update the matrix
    students[student - 1][day - 1] = value;
    cout << "Attendance/grade updated successfully.\n";
}

// Function to find the best student based on average grades
int findBestStudent(const int students[][MAX_DAYS], int numStudents)
{
    int bestStudent = -1;
    double highestAverage = -1.0;

    for (int i = 0; i < numStudents; i++)
    {
        int gradeSum = 0, gradeCount = 0;

        for (int j = 0; j < MAX_DAYS; j++)
        {
            if (students[i][j] >= 4)
            {
                gradeSum += students[i][j];
                gradeCount++;
            }
        }

        if (gradeCount > 0)
        {
            double average = (double)gradeSum / gradeCount;
            if (average > highestAverage)
            {
                highestAverage = average;
                bestStudent = i;
            }
        }
    }

    return bestStudent;
}

// Function to find the worst student based on average grades
int findWorstStudent(const int students[][MAX_DAYS], int numStudents)
{
    int worstStudent = -1;
    double lowestAverage = 11;

    for (int i = 0; i < numStudents; i++)
    {
        int gradeSum = 0, gradeCount = 0;

        for (int j = 0; j < MAX_DAYS; j++)
        {
            if (students[i][j] >= 4)
            {
                gradeSum += students[i][j];
                gradeCount++;
            }
        }

        if (gradeCount > 0)
        {
            double average = (double)gradeSum / gradeCount;
            if (average < lowestAverage)
            {
                lowestAverage = average;
                worstStudent = i;
            }
        }
    }

    return worstStudent;
}

// Function to find the student with the most absences
int findStudentWithMostAbsences(const int students[][MAX_DAYS], int numStudents)
{
    int mostAbsentStudent = 0;
    int maxAbsences = 0;

    for (int i = 0; i < numStudents; i++)
    {
        int absences = 0;

        for (int j = 0; j < MAX_DAYS; j++)
        {
            if (students[i][j] == -1)
            {
                absences++;
            }
        }

        if (absences > maxAbsences)
        {
            maxAbsences = absences;
            mostAbsentStudent = i;
        }
    }

    return mostAbsentStudent;
}
