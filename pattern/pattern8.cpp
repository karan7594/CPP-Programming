#include<iostream>
using namespace std;

int main(){
    int i,j;
    int n=6;
    for(i=0;i<6;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(j=0;j<i;j++){
            cout<<"*";
        }
        for(j=1;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}