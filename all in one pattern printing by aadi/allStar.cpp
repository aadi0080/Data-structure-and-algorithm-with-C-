                    // this program is combined by all pattern printig qustion
                   // rode map 
                  // 1st select shape<< for 1. square for 2. rectangle for 3. triangle 4. reverse triangle 
                 // 2nd select lenght '
                // 3rd print 
#include<iostream>
using namespace std;
int main(){
    int a;   // for shape .
    char ch; // for continue or not
    do
    {

        cout << "for  square>>1 " << endl;
        cout << "for rectangle>> 2 " << endl;
        cout << "for triangle>> 3" << endl;
        cout << "for reverse triangle>> 4" << endl;
        cin >> a;

        int n; // for range of shape . the  variable  is n .

        if (a == 1){                    // square  pattern printin 
    cout << "enter  the  side : ";
    cin >> n;

    for(int i=1;  i<=n ; i++){
    for(int j = 1 ; j<=n ; j++){
        cout<<" * ";
    }
    cout<< endl;
}
    
}

else if(a==2){                   // rectangle pattern printing
    cout << "enter  the length: ";
    cin >> n;
    int b;
    cout<<"enter  the breath: ";
    cin>> b ; 
    for(int i = 1  ; i<=n ; i++ ){
        for(int j=1 ; j<=b; j++){
            cout<<" * ";
        }
        cout<<endl; 
    }
}

else if(a==3){                 // right angle triangle pattern printing
    cout << "enter  the  height : ";
    cin >> n;
for(int i =1 ; i<=n ; i++){
    for(int j=1 ; j<= i; j++){
        cout<<" * ";
    }
    cout<<endl;
}
}

else if(a==4){                // reverse  triangle pattern printing 
    cout << "enter  the height: ";
    cin >> n;
    for(int i=1; i<=n ; i++){
        for(int j =1 ; j<=(n-i+1) ; j++){
            cout<<" * "; 
        }
        cout<<endl; 
    }
}
else{
    cout<<"invalid input"<<endl;
}

cout<<"do you want to continue ? (y/n) : ";
cin>>ch;
}
while( ch=='y' || ch=='Y');
return 0;
}


