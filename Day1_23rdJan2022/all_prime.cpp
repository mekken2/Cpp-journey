#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for (int i = 1; i <= num; i++){
        int j;
        for (j = 2; j < i; j++){
            if (i % j == 0){
                break;
            }
        }
        if (j == i){
            cout<<i<<" is a prime number."<<endl;
        }
    }
}