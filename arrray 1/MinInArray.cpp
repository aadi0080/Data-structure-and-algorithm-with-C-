#include<iostream>
#include<climits>
using namespace  std; 
int  main(){
    int size  ;
    cout<<"enter tthe  size off array"; 
    cin>>size ; 
    int arr[size]; 

    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    //int min =arr[0];  taking 1st element as minimum if not so re  assing 
    int min=INT_MAX ;  // taking maximum value as reference of comparing

    for(int j = 1; j<size ; j++){
        if(min>arr[j]){
            min=arr[j];
        }
    }
    cout<<min<<" "<<"is  minimum";

}