// Created by Muhammad Esam 
// Date : 25 november 2026

#include<iostream>
using namespace std;
int main(){
    int start_number{0},end_number{0};
    int sum{0};
    cout<<"Enter Starting number : ";
    cin>>start_number;
    cout<<"Enter Ending number :";
    cin>>end_number;
    int i=start_number;
    for( ; i<=end_number;i++){
        sum=sum+i;
    }
    cout<<"Sum of "<<start_number<<" to "<<end_number<<" = "<<sum;
    return 0;
}
