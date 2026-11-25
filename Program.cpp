// Created by Muhammad Esam
//Date : 25 November 2026

#include<iostream>
using namespace std;
int main(){
    int price_of_item_1=12.95,price_of_item_2=24.95,price_of_item_3=6.95,price_of_item_4=14.95,price_of_item_5=3.95;
    int sub_total=0,tax_price=0,total=0,tax_rate=6;
    cout<<"Price of item 1 = "<<price_of_item_1<<endl;
    cout<<"Price of item 2 = "<<price_of_item_2<<endl;
    cout<<"Price of item 3 = "<<price_of_item_3<<endl;
    cout<<"Price of item 4 = "<<price_of_item_4<<endl;
    cout<<"Price of item 5 = "<<price_of_item_5<<endl;
    sub_total=price_of_item_1+price_of_item_2+price_of_item_3+price_of_item_4+price_of_item_5;
    tax_price=(sub_total*tax_rate)/100;
    total=sub_total+tax_price;
    cout<<"Sub total = "<<sub_total<<endl;
    cout<<"Tax Amount = "<<tax_price<<endl;
    cout<<"Total Amount = "<<total<<endl;

    return 0;
}
