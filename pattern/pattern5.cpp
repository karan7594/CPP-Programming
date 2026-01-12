#include<iostream>
using namespace std;

int main(){

    int n=4;
    //total numbers of line this code
    for(int i=0;i<n;i++){
        //for space 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //for numbers 
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        //for other numebr
        // for(int j=i;j>0;j--){
        //     cout<<"*";
        // }
        cout<<endl;
        
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n=4;
//     for(int i = 0; i < n; i++) {

//         // print spaces
//         for(int j = 0; j < n-i-1; j++) {
//             cout << " ";
//         }

//         // print stars
//         for(int j = 0; j < 4; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }
