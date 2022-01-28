#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int temp;
    int res=0;

    while(n>0){
        temp = n % 10;
        n /= 10;
        res = (res*10)+temp;
    }
    cout<<res;
}