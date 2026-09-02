#include<iostream>
#include<climits>
using  namespace std  ; 

int  main(){
    cout<<"enter  hte  size ";
    int size ;
    cin>>size;
    int arr[size];

    // filling array
    for(int i=0 ; i<=size-1 ; i++){     
        cin>>arr[i];
    }


    // int max=arr[0];     // taking  1st  element  as reference  of comparing 
    int max=INT_MIN ;     // taking  minimum  value  as reference  of comparing
    
    // binary search
    for(int i=1 ; i <= size-1 ; i++ ){
        if(max<arr[i]){
            max=arr[i] ;
        }
    }
    cout<<max<<" "<<"is  maximum"; 


}