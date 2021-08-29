#include<iostream>
#include<string>

using namespace std;
struct seating{
	char row;
	unsigned int colomn;
}place;

struct seatingClass {
	int level;
};

struct additionalBeverages{
	char food;
	char drink;
};

seating setting(seating, seating);

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
	
	setupMenu:
		system("CLS");
		seating placerow, placecolomn;
		cout<<"Seting up the program specific to your cinema"<<endl;	
		setting(placecolomn, placerow);
		system("pause");
	Docs:
		system("CLS");
		cout<<"Documentation"<<endl;
				
	}
	
seating setting(seating colomnf, seating rowf){
	cout<<"Enter colomn symbol(Usually a letter): ";
	cin>>colomnf.colomn;
	cout<<"Enter row number: ";
	cin>>rowf.row;
	cout<<colomnf.colomn<<rowf.row;
	system("pause");
}
	




