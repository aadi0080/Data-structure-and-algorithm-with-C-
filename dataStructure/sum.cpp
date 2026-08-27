#include<iostream>
using namespace std; 
int main(){
    int n; // n 
    cout<<"enter  the  range: ";
    cin>>n;
    int sum=0 ;
    for(int i=1 ; i<=n ; i++){
        sum=i+sum;
    }

    cout<<"sum is: "<<sum<<endl;
    cout<<"average is: "<<sum/n;
}