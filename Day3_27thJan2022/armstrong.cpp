#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int check = n;
    int sum=0;
    int temp;

    while (n > 0){
        temp = n % 10;
        sum = sum + pow(temp,3);
        n /= 10;
    }
    if (check == sum){
        cout<<"Armstrong number.";
    }
    else{
        cout<<"Not an armstrong number.";
    }
}