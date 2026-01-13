#include<iostream>
using namespace std;

int binaryToDec(int binaryValue){
    int ans=0,pow=1;
    while (binaryValue>0){
        int rem = binaryValue%10;
        ans = ans + (rem*pow); 

        binaryValue = binaryValue/10;
        pow *=2;
    }
    return ans;
}

int main(){
    cout<<binaryToDec(111);
}