#include <iostream>
using namespace std;
void change(int data);//decalration

int main()
{
    int data = 3;
    change(data);
    cout << "Value of the data is: " << data << endl;
    return 0;
}
void change(int data)//definition //call by value-> copy of data will be made
{
    data = 5;
}