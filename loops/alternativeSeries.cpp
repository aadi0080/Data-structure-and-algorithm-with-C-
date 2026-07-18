#include<iostream>
using  namespace std;
int  main (){
    //1-2+3-4+5-6+7-8......   >>>>
   // HINT 1.   ODD TERM HAMESHA plud KE  SATH HAI AUR EVEN TERM minus  KE  SATH HAI .
   // HINT 2.    (1-2)+(3-4)+(5-6)....>>   (-1)+(-1)+(-1)+.....
   // so if turms are  even so series give -n/2
// if series is odd series give  -n/2 + n
// -n/2 + n is not equal to n/2.
// so solve without loops.
int n;
cout<<"enter no. of terms: ";
cin>>n;
if(n % 2 == 0){          //even
    cout<<-n/2;
}
else if(n % 2 != 0){      // odd
    cout<< (-n/2 + n);
}
}