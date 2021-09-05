#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

struct rating{
	char imdb[10], rottenTomatoes[50], maturity;
};

struct movie{
	char title[50], director[50], genre[50], playtime[4];	
	rating r;
};

struct tickets{
	char seatingClass;
	int amountofPeople, seatingPosition;
	double price;
};

struct beverage{
	char food[50], ingridients[100], type[10];
};
	
inline void showmovies(movie show[], int y){
	cout<<"\t--- Available Movies ---"<<endl;
	cout<<"Title"<<setw(10)<<"Genre"<<setw(10)<<"Playtime"<<setw(10)<<"Director"<<setw(10)<<"Ratings"<<endl;
	for(int i=0; i<y; i++){
		cout<<show[i].title<<setw(10)<<show[i].genre<<setw(10)<<show[i].playtime<<setw(10)<<show[i].director;
		cout<<setw(10)<<show[i].r.imdb<<"||"<<show[i].r.rottenTomatoes<<endl; 
	}	
}
	
inline void showbev(beverage order[], int z){
	cout<<"\t--- Available Beverage Items --- "<<endl;
	cout<<"Name"<<setw(10)<<"Type"<<setw(10)<<"Ingridients"<<endl;
	for(int i=0; i<z; i++){
		cout<<order[i].food<<setw(10)<<order[i].type;
		cout<<setw(10)<<order[i].ingridients<<endl;
	}
}


int main(){
	
	
	int choice, option, n, k, answer;
	movie showmov[n];
	movie add[n];
	beverage meal[k];
	
	menu:
		system("CLS");
		cout<<"Press 1 for client side: "<<endl;
		cout<<"Press 2 for Admin side: "<<endl;
		cin>>choice;
		
		
		if(choice == 1){
			client:
				system("CLS");
				cout<<"\t---Client side---"<<endl;
				cout<<"---------------------------------------------------------------"<<endl;
				cout<<endl;
				cout<<"Press 1 to see available movies and corresponding information"<<endl;
				cout<<"Press 2 to see avialable Beverage items"<<endl;
				cout<<"Press 3 to buy a ticket "<<endl;
				cout<<"Press 4 to go back to main menu"<<endl;
				cin>>option;
				
					if(option == 1 ){
						system("CLS");
						showmovies(showmov, n);
						system("PAUSE");
						goto client;
					}
					else if(option == 2){
						system("CLS");
						showbev(meal, k);
						system("PAUSE");
						goto client;
					}
					else if(option == 3){
						system("CLS");
						cout<<"---Tickets---"<<endl;
						cout<<"Choose a movie: "<<endl;
						showmovies(showmov, n);
						cout<<"Enter the corresponding number for the movie: ";
						int j;
						cin>>j;
						cout<<cout<<add[j].title<<" "<<add[j].genre<<" "<<add[j].playtime<<" "<<add[j].director;
						cout<<" "<<add[j].r.imdb<<"||"<<add[j].r.rottenTomatoes<<endl;
						cout<<"Choose your seating class: "<<endl;
						cout<<"Normal -- regular seating"<<endl;
						cout<<"VIP -- improved chairs + free meals"<<endl;
						cout<<"Gold --- premium seating + free meals"<<endl;
						cout<<"Normal(1), VIP(2), Gold(3)"<<endl;
						cout<<"Prices are 100, 200 and 300 respectively"
						int seats;
						cin>>seats;
						cout<<"Choose your Beverage: ";
						showbev(meal, k);
						int l;
						cout<<"choose your Beverage: "<<endl;
						cout<<"Enter the corresponding number: ";
						cin>>l;
						cout<<meal[i].food<<setw(10)<<meal[i].type;
						cout<<setw(10)<<meal[i].ingridients<<endl;

						if(seats == 1){
							system("CLS");
							cout"---Ticket---"<<endl;
							cout<<"MOVIE: "<<add[j].title<<endl;
							cout<<"CLASS: Normal"<<endl;
							cout<<"BEVERAGE: "<<cout<<meal[i].food<,endl;
							cout<<"Price: 150(including meals)"<<endl;
						}
						
						else if(seats == 2){
							system("CLS");
							cout"---Ticket---"<<endl;
							cout<<"MOVIE: "<<add[j].title<<endl;
							cout<<"CLASS: VIP"<<endl;
							cout<<"BEVERAGE: "<<cout<<meal[i].food<,endl;
							cout<<"Price: 200"<<endl;
						}
						else if(seats == 3){
							system("CLS");
							cout"---Ticket---"<<endl;
							cout<<"MOVIE: "<<add[j].title<<endl;
							cout<<"CLASS: Gold"<<endl;
							cout<<"BEVERAGE: "<<cout<<meal[i].food<,endl;
							cout<<"Price: 300"<<endl;
						}
						system("PAUSE");
						goto client;
					}
					else if(option == 4){
						goto menu;
					}
					else{
						cout<<"--- Invalid Input ---"<<endl;
						cout<<"Redirecting back to menu---";
						goto client;
					}
	
		}
		else if(choice == 2){
			admin:
				system("CLS");
				cout<<"\t---Admin Control Panel---";
				cout<<"-----------------------------------------------------------------------"<<endl;
				cout<<endl;
				cout<<"Press 1 to add movies to the registry"<<endl;
				cout<<"Press 2 to add beverage items to the registry"<<endl;
				cout<<"Press 3 to view beverage items and movies from the registry"<<endl;
				cout<<"Press 4 to go back to main menu"<<endl;
				cin>>option;
				
				
				
				if(option == 1){
					system("CLS");
					cout<<"\t--- Cinema Management system ---"<<endl;
					cout<<"\t----- Movie Manager -----"<<endl;
					cout<<"Amount of movies to add: ";
					cin>>n;
					for(int i=0; i<n; i++){
						system("CLS");
							
						cout<<"\t--- Cinema Management system ---"<<endl;
						cout<<"\t----- Movie Manager -----"<<endl;
						cout<<"Movie Title: ";
						cin.ignore();
						cin.getline(add[i].title, 50);
						cout<<"Genre: ";
						cin.ignore();
						cin.getline(add[i].genre, 50);
						
						cout<<"Playtime(In Minutes): ";
						cin.ignore();
						cin.getline(add[i].playtime, 50);
						
						cout<<"Director/Producer: ";
						cin.ignore();
						cin.getline(add[i].director, 50);
						cout<<"Rating: "<<endl;
						cout<<"\tIMDB: ";
						cin>>add[i].r.imdb;
						cout<<"\tRotten-Tomatoes: "<<endl;
						cout<<"\t\tCritic Scores: ";
						cin.ignore();
						cin.getline(add[i].r.rottenTomatoes, 50);
						cout<<"\t\tAudience Scores: --yet to be decided--"<<endl;
						
						showmovies(add, n);
					
							}
							goto admin;	
					
				}
				else if(option == 2){
				system("CLS");
				cout<<"Amount of Beverages you're entering?: ";
				cin>>k;
				cout<<"\t--- Food and Drinks Menu ---"<<endl;
				for(int i=0; i<k; i++){
					cout<<"Beverage Name: ";
					cin.ignore();
					cin.getline(meal[i].food, 50);
					cout<<"Type: ";
					cin.getline(meal[i].type, 10);
					cin.ignore();
					cout<<"Ingridents: ";
					cin.ignore();
					cin.getline(meal[i].ingridients, 200);
			}
					showbev(meal, k);
			
				}
				else if(option == 3){
					system("CLS");
					showmovies(showmov, n);
					showbev(meal, k);
					goto admin;
				}
				else if(option == 4){
					goto menu;
				}
				else{
					system("CLS");
					cout<<"Invalid Input"<<endl;
					cout<<"Redirecting.....";
					goto admin;
				}
			}
		else{
			system("CLS");
			cout<<"Invalid Input"<<endl;
			cout<<"Redirecting......";
			goto menu;
			
			
			
		}
	}
	

