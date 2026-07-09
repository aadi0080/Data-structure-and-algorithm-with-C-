#include<iostream>
using namespace std;
int main(){
    float cp;
    cout<<"enter cost  price:";
    cin>>cp;
    float sp;
    cout<<"enter  the  selling price:";
    cin>>sp;
if (cp==sp){
        cout<<"neither profit nor loss";
    }
if(cp>sp){
    cout<<"loss = ";
    cout<<cp-sp;
}
if(sp>cp){
    cout<<"profit = ";
    cout<<sp-cp;
}

}