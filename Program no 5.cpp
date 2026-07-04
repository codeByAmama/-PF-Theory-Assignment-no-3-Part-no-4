#include<iostream>
using namespace std;
void printVertical(char word[], int size){
	cout<<"Print the word Vertically "<<endl;
	for(int i=0; i<size; i++){
		cout<<word[i]<<endl;
	}
}

int main(){
	char word[100];
	cout<<"Enter a Word: ";
	cin>>word;
	int size=0;
	while(word[size]!='\0'){
		size++;
	}
	printVertical(word,size);
	return 0;
}
