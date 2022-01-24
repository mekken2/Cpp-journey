#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if (a > b){
        if (a > c){
            cout<<"A is biggest";
        }
        else{
            cout<<"C is biggest";
        }
    }
    else{
        if (b > c){
            cout<<"B is biggest";
        }
        else{
            cout<<"C is biggest";
        }
    }
}