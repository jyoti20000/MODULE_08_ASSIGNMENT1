#include<iostream>
using namespace std;
int main()
{
    cout << "Enter 1st number: ";
    int f_num;
    cin >> f_num;

    cout << "Enter 2st number: ";
    int s_num;
    cin >> s_num;

    if(f_num > s_num)
    {
        cout << f_num << " is greater than " << s_num;
    }
    else
    {
        cout << s_num << " is greater than " << f_num;
    }
    return 0;
}
