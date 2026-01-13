#include<iostream>
using namespace std;

int main(){
    int i,j,row=4,col=3,matrix[4][3];
    // for user input
    cout<<"enter the matrix value"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }

    // for user output
    cout<<"the matrix is : "<<endl;
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}