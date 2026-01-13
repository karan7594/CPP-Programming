#include<iostream>
using namespace std;

int calBinary(int decimalNum){
    int ans =0;
    int pow =1;
    while(decimalNum>0){
        int rem = decimalNum%2;
        decimalNum = decimalNum/2 ;

        ans = ans+(pow*rem);
        pow*=10;
    }
    return ans;
}

int main(){
    int decimalNum =8;
    cout<<calBinary(decimalNum);
    return 0;
}