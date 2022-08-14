#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int ram;
	cin>> ram;
	
	if (ram < 16){
		cout << "PC upgrade needed";
	}
	
	return 0;
}
