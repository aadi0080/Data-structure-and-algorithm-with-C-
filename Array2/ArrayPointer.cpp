#include<iostream>
using namespace std;
int main(){
    int arr[5] = {23 , 12 , 34 , 45 , 56}; // Array of 5 integers
    int *ptr = arr; // Pointer to the first element of the array = address  of the array  
    cout <<ptr << endl; // Print the value of the first element
    cout << *ptr << endl; // Print the value of the first element
    cout<<ptr[4]<<endl;   // ussing pointer to access the  element of the array using  index  insted  of arr  
    ptr++;  // ptr  agr int  hai to 4 plus ho jayega aur  ptr will point to the second element
    cout << *ptr << endl; // Print the value of the second element

    ptr--; // ptr will point to the first element again
    cout << *ptr << endl; // Print the value of the first element


    for(int i=0 ; i<=4 ;i++){
        cout<<*ptr<<" "; // Print the value of the first element
        ptr++;  // ptr will point to the next element
    }
    cout<<endl;

    cout<<*ptr<<endl; // Print the value of the last element   so we  need  to reassing ptr = arr;
ptr= arr; // reassing  ptr to the  first element of the  array 
cout<<*ptr<<endl; // Print the value of the first element   
}