#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r = n;

    for (int i = 1; i<=n; i++){
        for (int j = 1; j <= i; j++){
            cout<<"*";
        }
        for (int j = 1; j <= (r-1)*2; j++){
            cout<<" ";       
        }
        for (int j = 1; j <= i; j++){
            cout<<"*";
        }
        r--;
        cout<<endl;
    }

    r = 1;
    for (int i = n; i>=1; i--){
        for (int j = 1; j <= i; j++){
            cout<<"*";
        }
        for (int j = 1; j <= (r-1)*2; j++){
            cout<<" ";       
        }
        for (int j = 1; j <= i; j++){
            cout<<"*";
        }
        r++;
        cout<<endl;
    }
}