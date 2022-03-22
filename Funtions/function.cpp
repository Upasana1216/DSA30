#include <iostream>
using namespace std;
int func(int a)
{
    static int i = 0; // static variable //defined just once
    int j = 0;        // local variable //defined everytime u will call the function
    i++; //i=1 2
    j++; //j=0 1
    cout << "i=" << i << " and j=" << j << endl; //1 1  1 2
    return i;//return the value from funtion and give it to the variable where it is called
}
int main()
{
    int a=func(5);//fucntion name a=i
    func();
    func();
}


// // return type functionName(parameters-> datatype name,){
//     //body
// }

