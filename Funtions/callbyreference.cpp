#include <iostream>
using namespace std;
void swap(int *x, int *y)//address->value
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}
int main()
{
    int x = 500, y = 100;
    swap(&x, &y); // passing value to function//passing address of these variable
    cout << "Value of x is: " << x << endl;
    cout << "Value of y is: " << y << endl;
    return 0;
}