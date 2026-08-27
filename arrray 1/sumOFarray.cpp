#include<iostream>
using namespace std;
int main(){
    int size ; 
    cout<<"ENTER THE SIZE OF ARRAY:";
    cin>>size;
    int sum=0  ; 
    int  arr[size];
    for(int i=0 ; i<=size-1 ; i++){
        cin>>arr[i];
    }
    for(int j =0 ; j <= size -1 ; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    for(int k = 0 ; k<=size-1 ; k++){
     sum=sum+arr[k];
    }
    cout<<sum;
    

    
    


}