#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
	
	char fname;
	char sname;
	double grosssalary, tax, netsalary;
	string name;
	string rank;
	
	cout << "***********************************************************" << endl;
	cout << " Hello!!!!!" << endl;
	cout << " Welcome to Ghana Navy Payment Page" << endl;
	cout << "***********************************************************" << endl;
	
	cout << "Please enter your First Name:" << endl;
	getline(cin,name);
	cout << "Please enter your Second Name:" << endl;
	getline(cin,name);
	cout <<"Please enter your Rank:" << endl;
	getline(cin,rank);
	
	if (rank=="Sargent"){
		grosssalary = 2500;
		tax = 2.7;
		netsalary = grosssalary - tax;
	cout << name << rank << netsalary << endl;
	}
	else if (rank=="Major"){
		grosssalary = 4800;
		tax = 5.8;
		netsalary = grosssalary - tax;
	cout << name << rank << netsalary << endl;
	}
	else if (rank=="Captain"){
		grosssalary = 6800;
		tax = 8.3;
		netsalary = grosssalary - tax;
	cout << name << rank << netsalary << endl;
	}
	else 
	cout << "Incorrect Input" << endl;
	
	
	return 0;
}
