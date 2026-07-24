#include<iostream>
using namespace std; 
int main(){
    int n; 
    cout<<"enter any no: ";   // put n as you want height of triangle;
    cin >> n;
    // as assuming pattern/ let n=4
//       1 2 3 4
//    1. 1                            for "1", row and colunm both odd either even 
//    2. 0 1                          and if both i and j even or odd so i+j always divisible by 2.
//    3. 1 0 1                        and for "0" i+j always not divisible by 2.
//    4. 0 1 0 1 
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i ; j++ ){     
            if((i+j)%2==0)   cout<<" 1 "  ;
            else cout<<" 0 ";

        }
        cout<<endl;

    }

}
