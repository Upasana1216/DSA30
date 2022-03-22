#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {
        int j = 1;
        do
        {
            cout << i << "\n";
            if(j==2 && i==1)
                break;
            j++;
        } while (j <= 3);
        i++;
    } while (i <= 3);
}