#include <iostream>
#include <string.h>
using namespace std;


int main(int argc, char** argv) {
	
	double gross, tax, net;
	
	cout<< "************************************************" << endl;
	cout<< "Hi There, Welcome to the Ghana Navy Payment App" << endl;
	cout<< "************************************************" << endl;
    string name;
    string Rank;
	cout<< "Please enter your first name: "<< endl ;
	cout<< "First name:";
	getline(cin,name);
	cout<< "Please enter your second second: "<< endl ;
	cout<< "Second name:";
	getline(cin,name);
	cout<< "Please enter your rank: "<< endl ;
	cout<< "Rank:";
	getline(cin,Rank);
	
	if (Rank=="Sargent"){
		gross = 2500;
		tax = 2.5;
		net=gross-tax;
	cout<< net << endl;
	}
	else if (Rank=="Major"){
		gross = 4800;
		tax = 5.8;
		net=gross-tax;
	cout<< net << endl;
	}
		else if (Rank=="Captain"){
		gross = 6800;
		tax = 8.3;
		net=gross-tax;
	cout<< net << endl;
	}
	else 
	cout<< "Incorrect Input" ;
	return 0;
}



