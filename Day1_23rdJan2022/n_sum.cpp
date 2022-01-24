#include<iostream>
using namespace std;

// int main(){
//     int num1;
//     cout<<"Enter the number till you want sum: ";
//     cin>>num1;
//     int sum = 0;
//     for (int i = 1; i <= num1; i++){
//         sum += i;
//     }
//     cout<<sum<<endl;
// }

// int main(){
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;

//     while (num >= 0){
//         cin>>num;
//     }
//     return 0;
// }

int main(){
    int num;
    cin>>num;

    do{
        cin>>num;
    } while (num>=0);
    return 0;
}