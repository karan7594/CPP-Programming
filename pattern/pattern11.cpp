// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,n=6;
//     for(i=0;i<n;i++){
//         for(j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,n=4;
//     for(i=0;i<n;i++){
//         for(j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         for(j=0;j<n-i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




#include<iostream>
using namespace std;

int main(){
    int i,j,n=4;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    for (int i = 3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }







        
        
   
    
    return 0;
}