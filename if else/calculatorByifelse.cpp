#include<iostream>
using namespace std;
int  main (){
    int a  , b  ;
    char  op ; 
    cout<<"enter  the  problem : ";
    cin>>a>>op>>b  ; 
    // by nested if else  
// if (op=='+') 
// cout<<a+b;

// else if (op=='-') 
// cout<<a-b;

// else if(op=='*') 
// cout<<a*b;

// else if(op=='/') 
// cout<<a/b;


 // BY else  if    

if(op=='+'){
    cout<<a+b;
}
else{
    if(op=='-'){
    cout<<a-b;
    }
    else{
        if(op=='*'){
            cout<<a*b;
        }
        else{
            if(op=='/'){
                cout<<a/b;
            }
        }
    }
}

}
