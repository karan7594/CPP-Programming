#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}