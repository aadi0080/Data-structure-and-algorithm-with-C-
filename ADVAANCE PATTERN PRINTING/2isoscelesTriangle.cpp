#include<iostream>
using namespace  std  ; 
int main (){
    int n ; 
    cout<<"enter height  ";
    cin>>n;
    int nsp = n-1;
    int nst = 1; 
    for(int i=1 ; i<= n ; i++){
        for(int j=1 ; j<=nsp ; j++){
            cout<<" ";
        }
        nsp= nsp-1;
        for(int k =1 ; k <=nst ; k++){
            cout<<"*";
        }
        cout<<endl;
        nst = nst+2 ; 
    }
}