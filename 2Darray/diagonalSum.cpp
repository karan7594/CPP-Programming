#include<iostream>
using namespace std;

int diagonalSum(int mat[][4],int n=4){
        int sum = 0;


        //first tarika

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){

        //         // First diagonal value 
        //         if(i==j){
        //             sum+= mat[i][j];
        //         }

        //         //Second diagonal value
        //         else if(j == n-i-1){
        //             sum+=mat[i][j];
        //         }
        //     }
        // }


        //second tarika
        for(int i=0;i<n;i++){
            sum=sum+mat[i][i];
            if(i!=n-i-1){
                sum+=mat[i][n-i-1];
            }
        }
        return sum;
}

int main(){
    int matrix[4][4] = {{1,2,3,1},{4,1,1,2},{7,1,1,5},{1,32,52,1}};
    int n=4;
    cout<<diagonalSum(matrix,n);
    return 0;
}