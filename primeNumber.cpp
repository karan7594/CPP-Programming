#include<iostream>
using namespace std;

int main(){
    int n;
    bool isPrime = true;
    cout<<"enter the number check the number prime or not\n";
    cin>>n;

    // for(int i=2;i<=n-1;i++)              use the different 
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime =false;
        }
    }
    if(isPrime==true){
        cout<<"the number is prime";
    }else{
        cout<<"not prime";
    }

    return 0;
}