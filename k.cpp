#include<iostream>
#include<iomanip>
#include<string>


using namespace std;

struct rating{
	char imdb[10], rottenTomatoes[50], maturity[10];
};

struct movie{
	char title[50], genre[50],director[50],playtime[10];
	rating r;
}
showmov[1000]= {{"Soul","Family","Pete Docter","3 AM","8.1", "95","PG-rated"},
                 {"Little Women","Drama","Greta Gerwig","3 AM","7.8","95","R-rated"},
                {"The Irishman","Crime","Martin Scorsese","4 AM","7.8","95","R-rated"},
                     {"Cruella","Family","Craig Gillespie","5 AM","7.4","74","PG-rated"},
					 {"Black Widow","Action","Cate Shortland","5 AM","6.8","80","R-rated"},
					 {"Luca","Adventure","Enrico Casarosa","6 AM","7.5","91","PG-rated"},
                     {"Emma","Drama","Jim O'Hanlon","6 AM","6.7","87","R-rated"},
					 {"The White Tiger","Drama","Martin Sorensen","7 AM","7.1","91","R-rated"},
					 {"Herself","Drama","Keanu Ferguson","9 AM","7.0", "93","R-rated"},
					 {"Annette","Musical","Lois Christenson","11 AM","6.5","71","PG-13"}};

struct tickets{
	char name[20];
	char seatingclass;
	int amountofpeople, seatingposition;
	double price;
};

struct beverage{
	char food[50], ingridients[100], type[10];
}showmeal[1000]={{"burger","Bun,Beef,Chesse,Onion,lettuce,tomato,jalépeno","Fast food"},
             {"Taco","Chapai,Beef,Chicken,Garlic sause,onion","Fast food"},
			 {"Pizza","cheese,Peperroni,Beef,Olive,Tomato,onion","Fast food"},
			 {"Shawarma","pita bread,beef/chicken,jalepeno,cream sauce","Fast food"},
			 {"Caramel Popcorn","popcorn,caramel","snack"},
			 {"Coca-Cola","-","Drink"},
			 {"Fanta","-","Drink"}};

inline void showmovies(movie show[], int y){
	cout<<"\t--- Available Movies ---"<<endl;
	cout<<"Title"<<setw(10)<<"Genre"<<setw(10)<<"Director"<<setw(10)<<"Playtime"<<setw(10)<<"Ratings"<<endl;
	for(int i=0; i<y; i++){
		cout<<"\n"<<i+1<<". "<<(show+i)->title<<setw(10)<<(show+i)->genre<<"\t\t"<<(show+i)->director<<setw(10)<<(show+i)->playtime;
		cout<<setw(10)<<(show+i)->r.imdb<<"||"<<(show+i)->r.rottenTomatoes<<"||"<<(show+i)->r.maturity<<endl;
	}
}
inline void showticket(tickets tik[], int m){
	for (int i=0;i<m;i++){
		cout<<tik[i].name<<"||"<<setw(10)<<tik[i].seatingclass<<"||"<<setw(10)<<tik[i].seatingposition<<"||"<<
		setw(10)<<tik[i].price<<endl;
	}
}

inline int deleteMovie(movie show[], int y){
	string name;
	int i=0;
	cout<<"\t--- Delete Movie ---"<<endl;
	cout<<"enter the name of the movie"<<endl;
	cin>>name;
	for(i=0; i<y; i++){
		if((show+i)->title == name){
			for(int k = i + 1 ; k<y; k++){
				show[i] = show[k];
			}
			cout<<"Movie was deleted\n";
			y--;
			break;
		}else{
			continue;
		}
	}
	if(i==y){
		cout<<"Movie not found\n";
	}
	return y;
}

inline int deleteBeverage(beverage order[], int z){
	string name;
	int i=0;
	cout<<"\t--- Delete Beverage ---"<<endl;
	cout<<"enter the name of the beverage"<<endl;
	cin>>name;
	for(i=0; i<z; i++){
		if((order[i].food) == name){
			for(int k = i + 1 ; k<z; k++){
				order[i] = order[k];
			}
			cout<<"Beverage was deleted\n";
			z--;
			break;
		}else{
			continue;
		}
	}
	if(i==z){
			cout<<"Beverage not found\n";
		}
		return z;
}

inline void showbev(beverage order[], int z){
	cout<<"\t--- Available Beverage Items --- "<<endl;
	cout<<"Name"<<setw(10)<<"Type"<<"\t\t\t"<<"Ingridients"<<endl;
	for(int i=0; i<z; i++){
		cout<<"\n"<<i+1<<". "<<order[i].food<<"||"<<setw(10)<<order[i].type<<"||";
		cout<<"\t\t\t"<<order[i].ingridients<<endl;
	}
}


int main(){


	int choice, option,d, n = 1000, k = 1000,l,startNumMovie = 10, startNumBev = 7;

	movie add[n];
	beverage meal[k];
    tickets book[d];


	menu:
		system("CLS");
		//system("clear");
		cout<<"Press 1 for client side: "<<endl;
		cout<<"Press 2 for Admin side: "<<endl;
		cin>>choice;


		if(choice == 1){
			client:
				system("CLS");
				//system("clear");
				cout<<"--------------------------Client side--------------------------"<<endl;
				cout<<"---------------------------------------------------------------"<<endl;
				cout<<endl;
				cout<<"Press 1 to see available movies and corresponding information"<<endl;
				cout<<"Press 2 to see avialable Beverage items"<<endl;
				cout<<"Press 3 to buy a ticket "<<endl;
				cout<<"Press 4 to go back to main menu"<<endl;
				cin>>option;

					if(option == 1 ){
						system("CLS");
						//system("clear");
						showmovies(showmov,startNumMovie);
						system("PAUSE");
						goto client;
					}
					else if(option == 2){
						system("CLS");
						//system("clear");
						showbev(showmeal, startNumBev);
						system("PAUSE");
						goto client;
					}
					else if(option == 3){
						system("CLS");
						back:
						//system("clear");
						cout<<"-------Tickets--------"<<endl;
						cout<<"How many tickets do you want to buy? "<<endl;
						int x;
						cin>>x;
						for (int i=0;i<x;i++){
                                cout<<"Enter your name: "<<endl;
                        cin>>book[i].name;
						cout<<"Choose a movie: "<<endl;

						showmovies(showmov, 10);
						cout<<"Enter the corresponding number for the movie: ";
						int j;
						cin>>j;

						switch(j){
							case 1:
							cout<<showmov[0].title<<" "<<showmov[0].genre<<" "<<showmov[0].director<<" "<<showmov[0].playtime<<" ";
						cout<<" "<<showmov[0].r.imdb<<"||"<<showmov[0].r.rottenTomatoes<<endl;
						break;
						case 2:
						cout<<showmov[1].title<<" "<<showmov[1].genre<<" "<<showmov[1].director<<" "<<showmov[1].playtime<<" ";
						cout<<" "<<showmov[1].r.imdb<<"||"<<showmov[1].r.rottenTomatoes<<endl;
						break;
						case 3:
						cout<<showmov[2].title<<" "<<showmov[2].genre<<" "<<showmov[2].director<<" "<<showmov[2].playtime<<" ";
						cout<<" "<<showmov[2].r.imdb<<"||"<<showmov[2].r.rottenTomatoes<<endl;
						break;
						case 4:
						cout<<showmov[3].title<<" "<<showmov[3].genre<<" "<<showmov[3].director<<" "<<showmov[3].playtime<<" ";
						cout<<" "<<showmov[3].r.imdb<<"||"<<showmov[3].r.rottenTomatoes<<endl;
						break;
						case 5:
						cout<<showmov[4].title<<" "<<showmov[4].genre<<" "<<showmov[4].director<<" "<<showmov[4].playtime<<" ";
						cout<<" "<<showmov[4].r.imdb<<"||"<<showmov[4].r.rottenTomatoes<<endl;
						break;
						case 6:
						cout<<showmov[5].title<<" "<<showmov[5].genre<<" "<<showmov[5].director<<" "<<showmov[5].playtime<<" ";
						cout<<" "<<showmov[5].r.imdb<<"||"<<showmov[5].r.rottenTomatoes<<endl;
						break;
						case 7:
						cout<<showmov[6].title<<" "<<showmov[6].genre<<" "<<showmov[6].director<<" "<<showmov[6].playtime<<" ";
						cout<<" "<<showmov[6].r.imdb<<"||"<<showmov[6].r.rottenTomatoes<<endl;
						break;
						case 8:
						cout<<showmov[7].title<<" "<<showmov[7].genre<<" "<<showmov[7].director<<" "<<showmov[7].playtime<<" ";
						cout<<" "<<showmov[7].r.imdb<<"||"<<showmov[7].r.rottenTomatoes<<endl;
						break;
						case 9:
						cout<<showmov[8].title<<" "<<showmov[8].genre<<" "<<showmov[8].director<<" "<<showmov[8].playtime<<" ";
						cout<<" "<<showmov[8].r.imdb<<"||"<<showmov[8].r.rottenTomatoes<<endl;
						break;
						case 10:
						cout<<showmov[9].title<<" "<<showmov[9].genre<<" "<<showmov[9].director<<" "<<showmov[9].playtime<<" ";
						cout<<" "<<showmov[9].r.imdb<<"||"<<showmov[9].r.rottenTomatoes<<endl;
						default:
						cout<<"invalid choice";
						goto back;

                          }

					/*for (int j=0;j<10;j++){
						cout<<"\n"<<". "<<showmov[j].title<<"|| "<<showmov[j].genre<<"|| "<<showmov[j].director<<"|| "<<showmov[j].playtime<<" ||";
						cout<<" ||"<<showmov[j].r.imdb<<"||"<<showmov[j].r.rottenTomatoes<<endl;
					}*/
						cout<<"Choose your seating class: "<<endl;
						cout<<"Normal -- regular seating"<<endl;
						cout<<"VIP -- improved chairs + free meals"<<endl;
						cout<<"Gold --- premium seating + free meals"<<endl;
						cout<<"Normal(1), VIP(2), Gold(3)"<<endl;
						cout<<"Prices are 100, 200 and 300 respectively"<<endl;
						int seats;
						cin>>seats;
						cout<<"Choose your Beverage: ";
						showbev(showmeal, startNumBev);//edited
						int l;
						cout<<"choose your Beverage: "<<endl;
						cout<<"Enter the corresponding number: ";
						cin>>l;
						cout<<meal[l].food<<setw(10)<<meal[l].type;
						cout<<setw(10)<<meal[l].ingridients<<endl;
                          switch(seats){
						case 1:

							//system("clear");
							system("CLS");
							cout<<"---Ticket---"<<endl;
							cout<<"MOVIE: "<<showmov[j-1].title<<endl;
							cout<<"CLASS: Normal"<<endl;
							cout<<"BEVERAGE: "<<meal[l-1].food<<endl;
							cout<<"Price: 150(including meals)"<<endl;
						    cout<<"ENJOY YOUR MOVIE!"<<endl;
							 system("PAUSE");
						goto client;

							 break;

						case 2://edited
							//system("clear");
							system("CLS");
							cout<<"---Ticket---"<<endl;
							cout<<"MOVIE: "<<showmov[j-1].title<<endl;//edited here
							cout<<"CLASS: VIP"<<endl;
							cout<<"BEVERAGE: "<<meal[l-1].food<<endl;
							cout<<"Price: 300(including meal)"<<endl;
							cout<<"ENJOY YOUR MOVIE!"<<endl;
							break;
						system("PAUSE");
						goto client;

						 case 3:
							system("clear");
							//system("CLS");
							cout<<"---Ticket---"<<endl;
							cout<<"MOVIE: "<<showmov[j-1].title<<endl;
							cout<<"CLASS: Gold"<<endl;
							cout<<"BEVERAGE: "<<meal[l-1].food<<endl;
							cout<<"Price: 450(including meal)"<<endl;
							cout<<"ENJOY YOUR MOVIE!"<<endl;
						system("PAUSE");
						goto client;

					break;
					default:
						goto client;
						  }
						  }
					}
					else{
					goto menu;


					}
		}
		else if(choice == 2){
			admin:
				system("clear");
				//system("CLS");
				cout<<"-----------------------Admin Control Panel-----------------------------";
				cout<<"-----------------------------------------------------------------------"<<endl;
				cout<<endl;
				cout<<"Press 1 to add movies to the registry"<<endl;
				cout<<"Press 2 to add beverage items to the registry"<<endl;
				cout<<"Press 3 to view movies from the registry"<<endl;
				cout<<"Press 4 to view beverage items from the registry"<<endl;
				cout<<"Press 5 to delete movies from the registry"<<endl;
				cout<<"Press 6 to delete beverage items from the registry"<<endl;
				cout<<"Press 7 to go back to main menu"<<endl;
				cin>>option;



				if(option == 1){
					system("clear");
					//system("CLS");
					cout<<"\t--- Cinema Management system ---"<<endl;
					cout<<"\t----- Movie Manager -----"<<endl;
					cout<<"Amount of movies to add: ";
					cin>>n;
					for(int i=0; i<n; i++){
						system("clear");
						//system("CLS");
						cout<<"\t--- Cinema Management system ---"<<endl;
						cout<<"\t----- Movie Manager -----"<<endl;
						cout<<"Movie Title: ";
						cin.ignore();
						cin.getline(add[i].title, 50);
						cout<<"Genre: ";
						cin.getline(add[i].genre, 50);
						cout<<"Playtime: ";
						cin.getline(add[i].playtime, 50);
						cout<<"Director/Producer: ";
						cin.getline(add[i].director, 50);
						cout<<"Rating: "<<endl;
						cout<<"\tIMDB: ";
						cin>>add[i].r.imdb;
						cout<<"\tRotten-Tomatoes: "<<endl;
						cout<<"\t\tCritic Scores: ";
						cin.ignore();
						cin.getline(add[i].r.rottenTomatoes, 50);
						cout<<"\tMovie rating(PG/R): "<<endl;
						cin.getline(add[i].r.maturity, 50);
						cout<<"\t\tAudience Scores: --yet to be decided--"<<endl;
						showmov[startNumMovie] = add[i];
						startNumMovie++;
						;

							}
							goto admin;

				}
				else if(option == 2){
				system("clear");
				//system("CLS");
				cout<<"Amount of Beverages you're entering?: ";
				cin>>k;
				cout<<"\t--- Food and Drinks Menu ---"<<endl;
				for(int i=0; i<k; i++){
					cout<<"Beverage Name: ";
					cin.ignore();
					cin.getline(meal[i].food, 50);
					cout<<"Type: ";
					cin.getline(meal[i].type, 10);
					cout<<"Ingridents: ";
					cin.getline(meal[i].ingridients, 200);
					showmeal[startNumBev] = meal[i];
					startNumBev++;
			}
					goto admin;
				}
				else if(option == 3){
					system("clear");
					//system("CLS");
					showmovies(showmov, startNumMovie);
					system("PAUSE");
					goto admin;
				}
				else if(option == 4){
					system("clear");
					//system("CLS");
					showbev(showmeal, startNumBev);
					system("PAUSE");
					goto admin;
				}
				else if(option == 5){
					system("clear");
					//system("CLS");
				startNumMovie = deleteMovie(showmov, startNumMovie);
				system("PAUSE");
					goto admin;
				}
				else if(option == 6){
					system("clear");
					//system("CLS");
					deleteBeverage(showmeal, startNumBev);
					system("PAUSE");
					goto admin;
				}
				else if(option == 7){
					goto menu;
				}
				else{
					system("clear");
					//system("CLS");
					cout<<"Invalid Input"<<endl;
					cout<<"Redirecting.....";
					goto admin;
				}
			}
		else{
			system("clear");
			//system("CLS");
			cout<<"Invalid Input"<<endl;
			cout<<"Redirecting......";
			goto menu;



		}
	}
