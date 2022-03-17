#include <iostream>
using namespace std;
int main()
{
    int num=10;
    cout << "Enter a number to check grade:";
    cin >> num;
    switch (num)
    {
    case 10: //if(num==10)
        cout << "It is 10";
        
    case 20://else if
        cout << "It is 20";
        
    case 30:
        cout << "It is 30";
       
    default: 
        cout << "Not 10, 20 or 30";
       
    }
}