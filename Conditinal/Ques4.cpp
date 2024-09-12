#include<iostream>
using namespace std;
int main()
{
    int length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    int breadth;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    
    float areaOfRactangle = length * breadth;
    float perimeterOfRactangle = 2 * (length + breadth);

    if(areaOfRactangle > perimeterOfRactangle)
    {
        cout << "Area of the rectangle is greater than its perimeter";
    }
    else if (areaOfRactangle < perimeterOfRactangle) 
    {
        cout << "The perimeter of the rectangle is greater than the area.";
    } 
    else 
    {
        cout << "The area and perimeter of the rectangle are equal.";
    }
    return 0;
}