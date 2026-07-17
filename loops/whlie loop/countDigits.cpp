#include<iostream>
using namespace  std;
int main(){
    int n;
    int count = 0;
    cout<<"enter  the   no. ";
    cin>>n;
    int a = n;  // issse  hoga  ye  ki n loop me  chalne  ke  baad  last  me  zero hi hoga  tto 0 input  pe code wrong  answer dega. 
    while (n>0){
        n=n/10;
        count++;
    }
    if(a==0){
        cout<<" 1 digit";
    }
    else{
        cout<<count<< "digits";
    }
    

}