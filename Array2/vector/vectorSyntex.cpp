// why we  need  vector ?
//>> because  in array  the size  is  fixed  so we  need vector

#include<iostream>
#include<vector>      // header  file for  using vector 
using namespace std; 
int main(){
vector<int>v;  


//    initializing  vector with 0 size  and 0 capacity
//    the  difference in size  and capacity : size mean  to no. of  element  present  
//   and the capaccity  mean how  size  the  occupy

v.push_back(23);         // push back key create  capacity  1 2 4 4 8 8 8 8 phle  agar  capacity nhi raha  to 2x karega aur phir fill karega 
v.push_back(3);        // push back key is  used  to inserting  element  in vector 
v.push_back(11);       // we don't assing  value using v[0]=23  this give segmentation error 
v.push_back(21);      // but  we  print value and  update value 

for(int i=0 ; i<v.size() ; i++){
    //cout << v[i] << " "; 
     cout << v.at(i) << " "; // v.at(i) is  used  to  print the value of vector
}



}