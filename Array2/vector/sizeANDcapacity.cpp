#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    vector<int> v;
    v.push_back(23); // 1 , 1         // push back key create  capacity  1 2 4 4 8 8 8 8 phle  agar  capacity nhi raha  to 2x karega aur phir fill karega
    cout << v.size() << " " << v.capacity() << endl;

    v.push_back(3); // 2 ,2     // push back key is  used  to inserting  element  in vector
    cout << v.size() << " " << v.capacity() << endl;

    v.push_back(11); // 3 , 4      // we don't assing  value using v[0]=23  this give segmentation error
    cout << v.size() << " " << v.capacity() << endl;

    v.push_back(21); // 4 , 4    // but  we  print value and  update value
    cout << v.size() << " " << v.capacity() << endl;

    // if  you remove  elemnt  using pop the  size  will be decrease  but  once  the  capaciy is created it will not be decrease  it will remain same  until  you  create new vector

    v.pop_back(); // 3 , 4
    cout << v.size() << " " << v.capacity() << endl;

    v.pop_back(); // 2 , 4
    cout << v.size() << " " << v.capacity() << endl;

    v.pop_back(); // 1 , 4
    cout << v.size() << " " << v.capacity() << endl;

    v.pop_back(); // 0 , 4
    cout << v.size() << " " << v.capacity() << endl;


}