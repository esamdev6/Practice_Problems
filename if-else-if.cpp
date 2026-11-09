  // Created by Muhammad Esam 
 // Date : 9 November 2026
//👌(^///^)

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int user_choice=0;
    float radius=0.0,length=0.0,width=0.0,height=0.0,base=0.0;
    float area=0.0;
    const float pi=3.14159;
    cout<<"1. Circle"<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. Triangle"<<endl;
    cout<<"Please Enter your choice : ";
    cin>>user_choice;
    if(user_choice==1){
        cout<<"Enter radius of Circle : ";
        cin>>radius;
        area=pi*radius*radius;
        cout<<fixed<<setprecision(2);
        cout<<"Area : "<<area<<endl;
    }else if(user_choice==2){
        cout<<"Enter length of Rectangle : ";
        cin>>length;
        cout<<"Enter Width of Rectangle : ";
        cin>>width;
        area=length*width;
        cout<<fixed<<setprecision(2);
        cout<<"Area : "<<area<<endl;
    }else if(user_choice==3){
        cout<<"Enter Base of Triangle : ";
        cin>>base;
        cout<<"Enter height of Triangle : ";
        cin>>height;
        area=0.5*base*height;
        cout<<fixed<<setprecision(2);
        cout<<"Area : "<<area;
    }else {
        cout<<"Invalid Choice";
    }
    return 0;
}
