#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> v1;
    v1.push_back("javaTpoint ");
    v1.push_back("tutorial");
    for (vector<string>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
        cout << *itr;
    return 0;
}


// int elements = 12;   
//   vector<int> vec(elements, 8);   
//   for (int i = 0; i < vec.size(); i++)  
//   {  
//     cout << vec[i] << " \n";   
//   }  


// vector<int> vec_1{1,2,3,4,5,6,7,8};  
//   vector<int> vec_2(vec_1.begin(), vec_1.end());  
//   for (int i = 0; i < vec_2.size(); i++)  
//   {  
//     cout << vec_2[i] << " \n";   
//   }  