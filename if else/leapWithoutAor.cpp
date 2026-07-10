#include <iostream>
using namespace std;

int main() {
    int y;

    cout << "Enter the year: ";
    cin >> y;

    if (y % 400 == 0) {
        cout<<y;
        cout<<"is a leap year";
    }


    else{
        if(y%100==0){
            cout<<y;
            cout<<"is not a leap year .";
        }
        else{
            if(y%4==0){
                cout<<y;
                cout<<"is a leap year .";
            }
            else{
                cout<<y;
                cout<< "is not a leap year. ";

            }
        }
    }
}        


//  flow  chart
// [START:Input Year(y)]
//                               │
//                               ▼ /───────────────────── < Is y % 400 == 0 ? >
//                    \─────────────────────/
//                                                                                         /
//                                                                                         YES /                     \ NO /                       \
//                  ▼                         ▼
//                                                                                             [LEAP YEAR] /───────────────────── <
//                                                                                     Is y % 100 ==
//                                                                                 0
//     ? >
//                                    \─────────────────────/
//                                         /
//                                         YES /                     \ NO /                       \
//                                  ▼                         ▼
//                                             [NOT A LEAP YEAR] /───────────────────── <
//               Is y % 4 ==
//           0
//     ? >
//                                                 \─────────────────────/
//                                                      /
//                                                      YES /                     \ NO /                       \
//                                               ▼                         ▼
//                                                          [LEAP YEAR][NOT A LEAP YEAR]