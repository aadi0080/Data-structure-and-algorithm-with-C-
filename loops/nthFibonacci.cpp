#include<iostream>
using namespace std;
int main(){
    //  1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55........
    // nth term = (n-1)th  + (n-2)th.
int n;
cout<<"enter nth num ";
cin>>n;
  int a = 1;
  int b =1 ;
  int sum = 0;
for(int i=1;i<=(n-2);i++){ // n-2  is  because  the  itteration start from 2 ...
    sum=a+b;
    a=b;
    b=sum;
     
  }
  cout<<b;  // instade  of printing sum we  print b, 
              // bcoz at  n=1 and n =2 loop not run so b =1 print.
}
