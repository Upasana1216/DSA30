#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++) //1 2 3 4 6 7 8 9 10
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << "\n";
    }
}