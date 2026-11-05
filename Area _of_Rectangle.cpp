  // Created by Muhammad Esam
  // date : 5 november 2026   11:30PM

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void showTitle(){
	cout<<"Rectangle Calculator."<<endl;
}
int area (int length , int width){
	int area {};
	area=length*width;
	return area;
}
void showSize(int a){
	if(a<50){
		cout<<"Small";
	}else if(a>50 && a<150){
		cout<<"Medium";
	}else {
		cout<<"Large";
	}
}

int main(){
	int length {} , width {} , area_of_rectangle {};
	showTitle();
	cout<<"Enter length of Rectangle : ";
	cin>>length;
	cout<<"Enter width of Rectangle :";
	cin>>width;
	
	area_of_rectangle=area(length,width);
	
	showSize( area_of_rectangle);
	
	return 0;
	
	
}
