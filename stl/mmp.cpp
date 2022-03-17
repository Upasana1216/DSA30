#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    multimap<string, string> m = {
        {"India", "New Delhi"},
        {"India", "Hyderabad"},
        {"United Kingdom", "London"},
        {"United States", "Washington D.C"}};

    cout << "Size of map m: " << m.size() << endl;
    cout << "Elements in m: " << endl;

    for (multimap<string, string>::iterator it = m.begin(); it != m.end(); ++it)
    {
        cout << "  [" << (*it).first << ", " << (*it).second << "]" << endl;
    }

    return 0;
}