#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates of point 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of point 2 (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Enter the coordinates of point 3 (x3 y3): ";
    cin >> x3 >> y3;

    double area = abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0;

    if (area == 0) 
    {
        cout << "The points fall on one straight line." << endl;
    } 
    else 
    {
        cout << "The points not fall on one straight line." << endl;
    }

    return 0;
}
