#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Tell me your age: ";
    cin>>i;
    if(i<18){
        cout<<"You are not eligible to vote";
    }
    else{
        cout<<"You are eligible to vote";
    }
    return 0;

}