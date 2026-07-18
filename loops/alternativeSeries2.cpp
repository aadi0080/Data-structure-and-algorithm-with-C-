#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"enter   no. of term : ";
    cin>>n;
    int serie = 0; 
    for(int i = 1 ; i<=n ; i++ ){     // 1-2+3-4+5-6+7-8+9-10......>> up to n terms.
        if(i%2 != 0) serie = serie + i ;    //> 1+3+5+7..
        else serie = serie - i;            //> -2-4-6-8-10.....
        
    }
    cout<<serie;
}