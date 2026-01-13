#include<iostream>
using namespace std;

bool findValue(int mat[][3],int row, int col,int key){  

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key==mat[i][j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[3][3] = {{1,23,4},{3,43,42},{54,63,2}};

    int row =3,col=3;
    cout<<findValue(matrix,row,col,63);
    return 0;
}