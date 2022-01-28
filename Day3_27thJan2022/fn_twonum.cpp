#include<iostream>
using namespace std;

void add(int a, int b){
    int sum = a+b;
    cout<<sum;
}

int main(){
    add(12,13);
    cout<<endl;
    add(24,45);
    cout<<endl;
    return 0;
}