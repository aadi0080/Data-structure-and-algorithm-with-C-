#include<iostream>

using namespace std; 
int main (){
    int size ;
     cout<<"enter no of student: ";
     cin>> size ;
     int arr[size] ;
     // for entering marks  as  per roll no 
     cout<<"enter  the marks as  per as roll no. "; 
     for(int i=0  ; i<=size-1 ; i++){
        cin>>arr[i];
     }


     int rollno = 0;
     for(int i=0 ; i<=size-1  ; i++){
        if(arr[i]<=33){
         rollno = i+1;
            cout<<rollno<<" "<<"roll no. is fail";
            cout << endl;
        }
        
     }
     cout<<endl;
     
 

}