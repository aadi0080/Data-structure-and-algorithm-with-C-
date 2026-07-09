#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter  the 1st no. : ";
    cin>>a; 
    cout <<"enter  he 2nd  no :";
    cin>>b;
    cout<<"enter  the  3rd  no:";
    cin>>c;


    if(a>b){
       if(a>c) {
         cout<<a<<"is the  greatest .";

       }
      else {    // so ultimatelly c is grestest of them
        cout<<c<<"is the greatest no. ";
       }

    }
    else{
        if(b>c){
            cout<<b<<"is the greatest no.";
        }
        else{
            cout<<c<<"is the greatest no.";
        }
    }
    

}