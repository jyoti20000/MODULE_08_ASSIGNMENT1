#include<iostream>
using namespace std;
int main()
{
    float PI = 3.14;
    int radius = 4;
    float areaOfCircle = PI * radius * radius;
    float circumferenceOfCircle = 2 * PI * radius;

    if(areaOfCircle > circumferenceOfCircle )
    {
        cout << "Area of the circle is larger than the circumference.";
    }
    else
    {
        cout << "Circumference of circle is larger than area.";
    }
    return 0;
}