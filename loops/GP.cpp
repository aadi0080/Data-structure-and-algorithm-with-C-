#include<iostream>
using namespace std;
int main(){
    // 1 2 4 8 16 32 64 128 ......... gp with r=2. a=1;
    int n;
    cout<<"terms to be print: ";
    cin>>n;
    int a = 1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a= a*2;
    }
}
    // 2 10 50 250 1250....>> a=2 , r=5
//     int a=2;
// for(int i=1;i<n+1;i++){    ye i sirf itna  decide  karewga  ki loop kitni baar  chalega ise  saparet varible  bhi kehte  hai 
//     cout<<a<<endl;
//     a=a*5;

// }
