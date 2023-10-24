// It is a simole c++ program that calculates the total marks of students and highest marks among them
#include <iostream>
using namespace std;

// forward declaration
float sessional1(float marks1);
float sessional2(float marks2);
float final(float marks3);

// main function
int main()
{
    // marks variables
    float marks1, marks2, marks3, Tmarks, Hmarks;
    // students variable
    int Tstudents = 10;

    // using for-loop
    for (int i = 0; i < Tstudents; i++)
    {
        cout << "Enter the marks in sessional1" << endl;
        cin >> marks1;
        cout << "Enter the marks in sessional2" << endl;
        cin >> marks2;
        cout << "Enter the marks in final" << endl;
        cin >> marks3;

        // using if-else
        if (marks1 > 50 || marks2 > 50 || marks3 > 200)
        {
            cout << "Invalid input -Enter a valid input" << endl;
            cout << "Enter the marks in sessional1" << endl;
            cin >> marks1;
            cout << "Enter the marks in sessional2" << endl;
            cin >> marks2;
            cout << "Enter the marks in final" << endl;
            cin >> marks3;
        }
        else
        {
            // calling the functions
            Tmarks = sessional1(marks1) + sessional2(marks2) + final(marks3);
            cout << "Total marks are:" << Tmarks << endl;
            if (Tmarks > Hmarks)
            {
                Hmarks = Tmarks;
            }
        }
    }

    cout << "\nHighest marks are:" << Hmarks << endl;
    return 0;
}
// defining the functions
float sessional1(float marks1)
{
    float weightage = ((marks1 / 50.0) * 25.0);
    return weightage;
}
float sessional2(float marks2)
{
    float weightage = ((marks2 / 50.0) * 25.0);
    return weightage;
}
float final(float marks3)
{
    float weightage((marks3 / 200.0) * 50.0);
    return weightage;
}