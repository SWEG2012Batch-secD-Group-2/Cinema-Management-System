#include<iostream>
#include<string>

using namespace std;
struct seating{
	char colomn;
	unsigned int row;
}place;

struct seatingCapacity{
	int rowCapacity;
	char colomnCapacity;
};

struct seatingClass {
	int level;
};

struct additionalBeverages{
	char food;
	char drink;
};
struct toWatch{
	string movieName;
	int score;
	char rating;
};

seating setting(seating, seating);
seatingCapacity setseat(seatingCapacity, seatingCapacity);

int main(){

	int choice, choiceMenu;
	Home:
	cout<<"\t...Welcome..."<<endl;
	cout<<"Press 1 for Mini documentation or 2 to head straight to menu.: ";
	cin>>choice;
	
	if (choice == 1){
		goto Docs;
		system("pause");
		goto Home;
	}
	else if (choice == 2){
		goto Menu;
		system("CLS");
	}
	else {
		cout<<"--xxxx--Invalid input--xxxx--";
		goto Home;
		system("CLS");
	}
	
	Menu:
	cout<<"Press one to goto cinema menu: "<<endl;
	cout<<"Press 2 to goto setup menu: "<<endl;
	cout<<"Press 3 for mini documentation and instruction"<<endl;
	cin>>choiceMenu;
	
	if (choiceMenu == 1){
		goto cinemaMenu;
	}
	else if (choice == 2 ){
		goto setupMenu;
	}
	else if (choiceMenu == 3){
		goto Docs;
	}
	
	cinemaMenu: 
		system("CLS");
		cout<<"\tCinema Menu"<<endl;
		cout<<"Choose Movie Options";
	
	setupMenu:
		system("CLS");
		seating placerow, placecolomn;
		seatingCapacity rowCarry, colomnCarry;
		cout<<"Carry Capacity: "<<endl;
		setseat(colomnCarry, rowCarry);
		cout<<"Setting up the program specific to your cinema"<<endl;	
		setting(placecolomn, placerow);
		system("pause");
	Docs:
		system("CLS");
		cout<<"Documentation"<<endl;
				
	}
	
seating setting(seating colomnf, seating rowf){
	cout<<"Enter colomn symbol(Usually a letter): ";
	cin>>colomnf.colomn;
	cout<<"Colomn: "<<colomnf.colomn<<endl;
	cout<<"Enter row number: ";
	cin>>rowf.row;
	cout<<"row: "<<rowf.row<<endl;
	cout<<"Seat: "<<colomnf.colomn<<rowf.row<<endl;
	system("pause");
}

seatingCapacity setseat(seatingCapacity amountColomn, seatingCapacity amountRow){
	cout<<"Holding capacity: "<<endl;
	cout<<"Enter amount of row(9 max): ";
	cin>> amountRow.rowCapacity;
	cout<<"Enter amount of colomn(A-Z): ";
	enum colomnSeats{A=1, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z};
	cin>>amountColomn.colomnCapacity;
	
	cout<<"Total Seating Capacity: ";
	cout<<amountRow.rowCapacity * amountColomn.colomnCapacity<<endl;
	cout<<"Seats range from "<<"1A to "<<amountRow.rowCapacity<<amountColomn.colomnCapacity;
	system("pause");
	
	
}	




