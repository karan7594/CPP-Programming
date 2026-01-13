#include<iostream>
#include<climits>            //for the use of INT_MIN;     line 7
using namespace std;


int rowSum(int mat[][3],int row,int col){         //make a function    **only column value are fill
        int maxRowSum = INT_MIN;                  //max value find variable 
        for(int i=0;i<row;i++){
            int rowSumIn=0;                       //add rows value through this variable
            for(int j=0;j<col;j++){
                rowSumIn+=mat[i][j];  // ** most important line  **it is print the max value of rows 
            }                                               //if you find the column max value then convert the i and j    i=j and j=i;
            maxRowSum = max(maxRowSum,rowSumIn);
        }
        return maxRowSum;                         //****return the max value it is the most part of function
}

int main(){
    int matrix[3][3]={{10,4,3},{3,7,6},{7,8,9}};
    int row=3,col=3;            
    cout<<rowSum(matrix,row,col);
    
    return 0;

}