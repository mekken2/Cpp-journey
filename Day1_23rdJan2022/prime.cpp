#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i;
    for (i = 2; i < num; i++){
        if (num % i == 0){
            cout<<"Not prime number";
            break;
        }
    }
    if(i==num){
        cout<<"Prime number"<<endl;
    }
    return 0;
}