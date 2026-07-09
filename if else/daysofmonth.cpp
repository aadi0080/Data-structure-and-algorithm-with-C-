#include<iostream>
 using  namespace  std; 
 int main (){
    int x ;
    cout<<"enter  month no. ";
    cin>>x ;
    if(x>12)
    cout<<"invalid input ";
    else if((x <= 7 && x%2 != 0 ) ||( x>=8 && x%2 == 0 ))
    cout<<"31 days ";
    else if ( x==4 || x== 6 || x == 9 ||x == 11 )
    cout<<"30 days ";
    else  if (x==2 )
    cout<<"28 days" ;
 }