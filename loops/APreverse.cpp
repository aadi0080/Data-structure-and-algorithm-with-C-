#include<iostream>
using namespace std; 
int main(){
   // 100 97 94 91 88....... print all possitive
   //ath = a+(n-1)d   >> d= -3 >> 0 < 100 +(n-1)-3  n=34 turm
   int a =100; 
   for(int i=1;i<=34;i++){
   cout<<a<<endl;
   a=a-3;
  }
}

 
