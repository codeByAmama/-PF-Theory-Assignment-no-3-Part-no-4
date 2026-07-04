#include<iostream>
using namespace std;
double getBowlingAverage(int runsConceded, int wicketsTaken){
   if(wicketsTaken==0){
   	return 0.0;
   }
   return (double)runsConceded/wicketsTaken;
}

int main(){
	int runsConceded, wicketsTaken;
	double average;
	cout<<"Enter Runs Conceded:  ";
	cin>>runsConceded;
	cout<<"Enter Wickets Taken:  ";
	cin>>wicketsTaken;
	average=getBowlingAverage(runsConceded, wicketsTaken);
	cout<<"Bowling Average: "<<average;
  return 0;
}
