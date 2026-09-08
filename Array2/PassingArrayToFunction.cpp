#include<iostream>
using  namespace  std   ;
// arrat always  pass by  reference never  by  value

void  display(int x[] , int element ){    
    for(int i=0 ; i<=4 ; i++){
        cout<<x[i]<<" ";
    }
    x[4] = 5 ;   // thsi pointer  have  proper  power to update  or reassing value to element  of  array
    
}
// int change (int c[]){   // change  array  by 
//     for(int )
// }

int main() {
int arr[5]={1, 2 ,3 ,4 , 43 };
int  size = sizeof(arr)/sizeof(arr[0]);      // sizeof operator kitne  byte  liye  yee
cout << size << endl;                     // batata  hai aur  jab ham use  array  ke  single  element se  devide  kar  dete hai to array  me no.of  element  pta  chal jata  hai
display(arr , size );                           // this  is  convetional way  that ham array  ke  sath size  bhi pass  karte hai 
cout<<endl;
display(arr , size );     // when you re  call function chnage is  visible 
cout<<endl;
cout<<arr[5]<<endl;   // 5  is  updated  in  array  by  function 
cout<<arr; // this is  address  of  first  element  of  array  because  array  name is  pointer to first element of array
}

