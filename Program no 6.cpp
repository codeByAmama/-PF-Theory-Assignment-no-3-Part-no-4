#include<iostream>
using namespace std;
void reverseWord(char word[],int size){
	for(int i=0; i<size/2; i++){
		char var=word[i];
		word[i]=word[size-i-1];
		word[size-i-1]=var;
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
	reverseWord(word,size);
	cout<<"Reverse Word: "<<word;
	return 0;
}
