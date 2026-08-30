//  find  x  in array  and input  x and  array  
#include<iostream>
using namespace  std  ; 
int  main() {
    // array of 5  
    int  arr[5];
    cout<<"enter  array:  ";
    for(int i=0 ; i <=4  ; i++ ){
        cin>>arr[i];
    }
    int x; 
    cout<<"enter  the  no you want  ot  find ";
    cin>>x; 
    for(int i=0 ; i<=4 ; i++){      // binary search 
        if(arr[i]==x){
            cout<<arr[i]<<" "<<"at  index  of "<< i;
        }
        else {
            cout<<"element not  found";
            break;
        }
        
    }
    
    

}