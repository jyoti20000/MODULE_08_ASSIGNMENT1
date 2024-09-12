#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Enter the x-coordinate of the point: ";
    cin >> x;

    cout << "Enter the y-coordinate of the point: ";
    cin >> y;

    if (x == 0 && y == 0) 
    {
        cout << "The point is at the origin (0, 0)." << endl;
    } 
    else if (x == 0) 
    {
        cout << "The point lies on the y-axis." << endl;
    } 
    else if (y == 0) 
    {
        cout << "The point lies on the x-axis." << endl;
    } 
    else 
    {
        cout << "The point does not lie on the x-axis, y-axis, or the origin." << endl;
    }

    return 0;
}
