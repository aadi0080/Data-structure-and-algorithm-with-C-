#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"'enter the  no. ";
    cin>>n;
    int m= n-1 ;
    for(int i=1 ; i<=2*n -1 ; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int j =1 ; j<= m; j++){
        for(int k =1 ; k<=m+1-j ; k++){
            cout<<"*";
        }
        for(int l=1 ; l<=2*j-1; l++){
            cout<<" ";
        }
        for (int k = 1; k <= m + 1 - j; k++){
             cout<<"*";
        }

        cout<<endl;
    }
    
}