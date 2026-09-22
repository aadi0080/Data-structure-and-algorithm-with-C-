#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>nums , int size ){
    for(int i=0 ; i<size ; i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int>nums; 
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4); 
    nums.push_back(5);
   int size = nums.size();
    display(nums , size);
    cout<<endl;
    for(int i =0 ; i<size ; i++){

        cout<<nums[size-i-1]<<" ";
    }
}