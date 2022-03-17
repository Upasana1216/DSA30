#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> li = {20, 30, 40, 50};
    li.push_front(10);
    list<int>::iterator itr;
    for (itr = li.begin(); itr != li.end(); ++itr)
        cout << *itr << ",";
    return 0;
}