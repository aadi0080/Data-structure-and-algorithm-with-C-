#include<iostream>
using namespace std;
int main(){
    float p; 
    cout<<"enter the percentage: ";
    cin>>p;


    if(p>=91){
        cout<<"excellent";

    }
    else{
        if(p>=81){
            cout<<"very good";
        }
        else{
            if(p>=71){
                cout<<"good";
            }
            else{
                if(p>=61){
                    cout<<"average";
                }
                else{
                    if(p>=51){
                        cout<<"below average";
                    }
                    else{
                        cout<<"fail";
                    }
                }
            }

        }

    }

}   
    
    
