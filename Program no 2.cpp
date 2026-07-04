#include<iostream>
using namespace std;
int main(){
	int rows, columns;
	cout<<"Enter the no Rows: ";
	cin>>rows;
	cout<<"Enter the no Columns: ";
	cin>>columns;
	cout<<"Enter the Elements in 2D Array "<<endl;
	int marks[rows][columns];
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
		  cin>>marks[i][j];
		}
	}
	
	int result=marks[0][0];
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			if(!(i==0 && j==0)){
		      result=result-marks[i][j];
        	}
	    }
	}
    cout<<"Final Result= "<<result;
    return 0;
}
