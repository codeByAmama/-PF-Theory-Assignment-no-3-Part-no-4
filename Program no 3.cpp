#include<iostream>
using namespace std;
double calculateArea(double side){
	return side*side;
}

double calculateArea(double length, double width){
	return length*width;
}

int main(){
	double side, length, width, result;
	cout<<"Enter the side of a square: ";
	cin>>side;
	cout<<"Enter the length of a rectangle: ";
	cin>>length;
	cout<<"Enter the width of a rectangle: ";
	cin>>width;
	cout<<"Area of Square: "<<calculateArea(side)<<endl;
  cout<<"Area of Rectangle: "<<calculateArea(length,width);
  return 0;
}
