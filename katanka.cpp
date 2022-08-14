#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
	char name;
	char pass;
	double tax=0;
	int choose=0;

	
	cout<< "********************************" << endl;
	cout<< "Hello, Welcome to Katanka Motor" << endl;
	cout<< "********************************" << endl;
	cout<< "Please Enter your username: "<<endl;
	getline (cin,name);
	cout<< "Please Enter your password: "<<endl;
	getline (cin,name);	
 	
	string username, password;
	if ((username=="admin") && (password=="admin")){
		cout<< "Kindly make you Choice";
		cout<< "1. Saloon Car = (GHc 25,000)";
		cout<< "2. 4x4 Car = (GHc 50,000)";
		cout<< "3. Sport Car = (GHc 75,000)";
		
	}
	
	
	
	
	
	
	
	return 0;
}
