#include<iostream>
using namespace std;

int main(){
    int amt;
    cout<<"Enter the amount of money you have: ";
    cin>>amt;

    if (amt > 5000){
        cout<<"Rahul goes with Prachi";
    }
    else if (amt > 2000){
        cout<<"Rahul goes with Rashmi";
    }
    else{
        cout<<"Rahul sucks lmao";
    }
}