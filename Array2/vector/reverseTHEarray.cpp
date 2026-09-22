#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ;
    cout<<"enter the size: ";
    cin>>n;
    vector <int >nums;
    int temp;
    for(int i=0 ; i<n ; i++){
        cin>>temp;
        nums.push_back(temp);
        
    }
    for(int i=n-1 ; i>=0 ; i--){
        cout<<nums[i]<<" ";
    }
}