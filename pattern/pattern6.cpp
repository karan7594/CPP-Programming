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
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        //for other numebr
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
        
    }
    return 0;
}