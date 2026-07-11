#include<iostream>
using namespace std;
int main (){
    int a , b , c , d , e ;
    cout<<"all no. must  be  identical otherwise code crash"<<endl;
    cout << "enter the no. ";
    cin>> a; 
    cout << "enter the no. ";
    cin>> b;
    cout << "enter the no. ";
    cin>> c;
    cout << "enter the no. ";
    cin>>d;
    cout << "enter the no. ";
    cin>> e; 
if(a>b && a>c && a>d && a>e ){
cout<<a <<" is greatest "<<endl;
}
else{ 
    if (a < b && a < c && a < d && a < e)

    cout << a << "is smallest . "<<endl;
}

if (b > a && b > c && b > d && b > e)
    {
        cout << b << " is greatest. "<<endl;
    }
else {
    if (b < a && b < c && b < d && b < e)

    cout << b << " is smallest . "<<endl;
}


if (c > a && c > b && c > d && c > e)
    {
        cout << c << "is greatest. "<<endl;
    }
    else{
         if (c < a && c < b && c < d && c < e)
    
        cout << c << "is smallest. "<<endl;
    }


if (d > a && d > b && d > c && d > e){
    
        cout << d << "is greatest."<<endl;
    }
    else{
         if (d < a && d < b && d < c && d < e)
    
        cout << d << "is smallest."<<endl;
    }

if (e > a && e > b && e > c && e > d){
    
    cout<<e << "is greatest. "<<endl;
    }
    else{
        if (e < a && e < b && e < c && e < d)
    
        cout << e << "is smallest. "<<endl;
    }
    
}