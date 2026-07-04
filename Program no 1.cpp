#include<iostream>
using namespace std;
int main(){
	int rows, columns;
	int sum=0;
	cout<<"Enter the no Rows: ";
	cin>>rows;
	cout<<"Enter the no Columns: ";
	cin>>columns;
	cout<<"Enter the marks of students in 2D Array "<<endl;
	int marks[rows][columns];
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
		  cin>>marks[i][j];
		  sum+=marks[i][j];
		}
	}
	cout<<"The sum of all the elements in the 2D Array = "<<sum;
}
