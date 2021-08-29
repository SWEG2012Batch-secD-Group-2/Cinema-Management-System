#include<iostream>
#include<string>
using namespace std;

struct seat{
	string level;
	int seatCap;
};
seat availability(seat, seat);


int main(){

	int choice;
	seat seatInfo, seatStyle;
	tickets:
	availability(seatInfo, seatStyle);
	cout<<"Press 1 for to go back to ticketing or 2 for food and beverages";
	cin>>choice;
	if (choice == 1){
		goto tickets;
	}
	else if(choice == 2){
		//beverage choices
	}

}



seat avialability(seat style, seat free){
	seat amountofTickets;
	cout<<"choose seating Class: "<<endl;
	cin>>style.level;
		if(style.level == "normal"){
			cout<<"Max Capacity - 100 people"<<endl;

			cout<<"How many tickets do you want?: "<<endl;
			free.seatCap = 100 - amountofTickets.seatCap;
			cout<<free.seatCap<<" Seats left"<<endl;
		}
		else if(style.level == "vip"){
			cout<<"Seating Capacity - 50 people"<<endl;
			cout<<"How many tickets do you want?: "<<endl;
			cin>>amountofTickets.seatCap;
			free.seatCap = 50 - amountofTickets.seatCap;
			cout<<free.seatCap<<" Seats left"<<endl;
		}
		else if(style.level == "gold"){
			cout<<"Seating capacity - Gold"<<endl;
			cout<<"How many tickets do you want?: "<<endl;
			cin>>amountofTickets.seatCap;
			free.seatCap = 20 - amountofTickets.seatCap;
			cout<<free.seatCap<<" Seats left"<<endl;
		}
		else{
			cout<<"---xxx---Invalid Input---xxx---"<<endl;
		}
    return free.seatCap;


};
