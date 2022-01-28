#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int i){
    for (int j=2; j<=sqrt(i); j++){
        if (i % j == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n1=10;
    int n2=100;

    for (int i=n1; i<=n2; i++){
        if(isPrime(i)==true){
            cout<<i<<" is a Prime number."<<endl;
        }
    }
}