#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    for (int i=1; i<=num; i++){
        if (i % 3 == 0){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
}