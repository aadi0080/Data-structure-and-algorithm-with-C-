#include<iostream>
using namespace std; 
int main (){
    int n ; 
    cout<<"enter row  no. : ";
    cin>>n;
    int a;
    for(int i=1 ;i<=n; i++){
        if(i%2==0) a=0;
        else a=1;
        for(int j=1 ; j<=i ; j++){
        cout<<a;                  // if this is code so their is no alternative seies of 101 or010
        if(a==1) a=0;                          // using  fliping for alternaive seris
        else a=1;
        }
        
         cout<<endl;
    }
}