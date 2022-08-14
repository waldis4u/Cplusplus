#include <iostream>
#include <string.h>

using namespace std;


int main(int argc, char** argv) {
		//input data
		char username[20];//userName =admin
		char password[20];//password =admin
		char rank[20];
		double net,gross,tax;
		int counter = 0;
		
		
		cout<<"Welcome "<<endl;
		cout<<"*************"<<endl;
		cout<<"Please Enter Username: ";
		cin>>username;
		cout<<"Please Enter Password: ";
		cin>>password;
		
		if(strcmp(username,"admin") == 0 && strcmp(password,"admin") == 0 ){
		  		int counter = 0;
				while(counter <10){
				
					int choice;
					double tax = 0.5, price=0;
					cout<<"Choose car type"<<endl;
					cout<<"1. Saloon(GHc 25,000)"<<endl;
					cout<<"2. SUV(Ghc 30,000)"<<endl;
					cout<<"3. Sport(Ghc 50,000)"<<endl;
					cin>>choice;
					switch(choice){
						case 1 :
							price = 25000;
							cout<<"Initial cost is "<<price<<endl;
							cout<<"Final cost (with tax) is "<<price + (price * (tax/100))<<endl;
							break;
						case 2 :
							price = 30000;
							cout<<"Initial cost is "<<price<<endl;
							cout<<"Final cost (with tax) is "<<price + (price * (tax/100))<<endl;
							break;
						case 3 :
							price = 50000;
							cout<<"Initial cost is "<<price<<endl;
							cout<<"Final cost (with tax) is "<<price + (price * (tax/100))<<endl;
							break;
					}
					cout<<endl;
					cout<<endl;
				}	
		}else{
		   cout<<"Incorrect username and password!"<<endl;
		}
		
	
	return 0;
}
