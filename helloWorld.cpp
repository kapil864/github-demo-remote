#include<iostream>
using namespace std;

// addition function
int addition(int a, int b){
	return a+b;
}

// subtract funttoin
int sub(int a, int b){		// from remote repo
	return abs(a-b);
}

// multi ifunction
int multi(int a, int b){
	return a*b;                 // from local repo
}

int main(){
	cout<<"Hello world"<<endl;
	// add subtraction
	cout<<"implemented subtract function in master barnch"<<endl;
	// add addition
	cout<<"Implemented addition function on bug456 branch"<<endl;
	// add multipication
	if (1==1)
		cout<<4*5;
	else 
		cout<<8*9;
	// add division

	// sqaure implementation
	cout<<"Sqare fuction"<<endl; // to demonstrate stashing

	// contents added on loacal macine
	cout<<"this commnet is on local macjne to demostrate working of push cmd"<<endl;
	return 0;	
}
