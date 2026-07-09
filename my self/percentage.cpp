#include<iostream>
using namespace std ;
int main(){
    float a , b , c , d , e , f ;
    if( a < 101 ){
        cout<<"english marks :";
    cin>> a ;
    }
    else{
        cout<<"enter  valid  marks (error)";
    }

    if (b < 101)
    {
        cout << " maths /boilogy / accountancy marks :";
        cin >> b;
    }
    else
    {
        cout << "enter  valid  marks (error)";
    }

    if (c < 101)
    {
        cout << "physics/economics marks  :";
        cin >> c;
    }
    else
    {
        cout << "enter  valid  marks (error)";
    }

    if (d < 101)
    {
        cout<< "chemistry/BST marks :";
        cin >> d;
    }
    else
    {
        cout << "enter  valid  marks (error)";
    }

    if (e < 101)
    {
        cout << "hindi marks  :";
        cin >> a;
    }
    else
    {
        cout << "enter  valid  marks (error)";
    }

    if (f < 101)
    {
        cout << "physical ed. marks :";
        cin >> a;
    }
    else
    {
        cout << "enter  valid  marks (error)";
    }
    
    float sum ;
    sum = a + b + c + d + e + f;

    cout << "the total marks in 6 sub out of 600 is " <<endl;
    cout << sum <<endl;
    float p;
    p = sum / 6;
    cout << "the percentage is "<<endl;
    cout<< p  <<endl;
    
}
