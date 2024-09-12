#include <iostream>
using namespace std;

int main() {
    double marks_A, marks_B, marks_C;

    cout << "Enter the marks of student A: ";
    cin >> marks_A;

    cout << "Enter the marks of student B: ";
    cin >> marks_B;

    cout << "Enter the marks of student C: ";
    cin >> marks_C;

    // Determine the student with the least marks
    if (marks_A <= marks_B && marks_A <= marks_C) 
    {
        cout << "Student A has the least marks." << endl;
    } 
    else if (marks_B <= marks_A && marks_B <= marks_C) 
    {
        cout << "Student B has the least marks." << endl;
    } 
    else 
    {
        cout << "Student C has the least marks." << endl;
    }

    return 0;
}
