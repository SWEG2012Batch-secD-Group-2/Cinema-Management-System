#include <iostream>
#include <string>
using namespace std;
struct seating{
 	int row;
 	
 	char colomn;
 	
 };
  struct movieInfo{

string movieName;
string genre;
double imdbRanking;
int rTomatoesRanking;
int ranking;

}movNaming[10]= {{"Soul","Family",8.1, 95, 1},{"Little Women","Drama",7.8, 95,2},{"The Irishman","Drama",7.8, 95,3},
                     {"Cruella","Family",7.4, 74, 9},{"Black Widow","Action",6.8, 80, 7},{"Luca","Adventure",7.5, 91, 5},
                     {"Emma","Drama",6.7, 87,8},{"The White Tiger","Drama",7.1, 91,6},{"Herself","Drama",7.0, 93,4},{"Annette","Musical",6.5, 71,10}};
struct seatingClass {
 	string level;
 };
struct additionalBeverages{
 	string food;
 	string drink;
 };
 struct toWatch{
 	string movieName;
 	float score;
 	char rating;
 };
 struct info{
    string name;
    int age;
    seating place;
    seatingClass package;
    additionalBeverages snack;
    toWatch show;
     }input[200];

inline void arrangment(){
cout<<"\n\n____________________________________________________";
cout<<"\n1A 1B 1C 1D 1E 1F 1G 1H 1I 1J 1K 1L 1M 1N 1O 1P\n2A 2B 2C 2D 2E 2F 2G 2H 2I 2J 2K 2L 2M 2N 2O 2P";
cout<<"\n3A 3B 3C 3D 3E 3F 3G 3H 3I 3J 3K 3L 3M 3N 3O 3P\n4A 4B 4C 4D 4E 4F 4G 4H 4I 4J 4K 4L 4M 4N 4O 4P";
cout<<"\n____________________________________________________"<<endl;
}
inline void foodoption(){
    
    cout<<"\t\tSnack\t\t\tdrink"<<endl;
    cout<<"\t\tPopcorn\t\t\tSprite(S/L)"<<endl;
    cout<<"\t\tSunchips\t\tFanta Orange(S/L)"<<endl;
    cout<<"\t\tMr.Potato\t\tCoca-Cola(S/L)"<<endl;
    cout<<"\t\tNone";
}

 void displayMovies(movieInfo movieList[]){

cout<< "\n-------------------------** Movie List With Ratings and Ranking **------------------------- "<< endl;
cout<<endl;
cout<<"| Movie Name |"<<"\t\t"<<"| Genre |"<<"\t "<<"| Ranking |"<< "\t "<<"| Rotten Tomatoes Rating |"<<"\t "<<"| IMDb Rating |"<<endl;
for(int i=0; i<10; i++){

    cout<<movieList[i].movieName<<"\t\t\t"<<movieList[i].genre<<"\t\t\t"<<movieList[i].ranking<<"\t\t\t";
    cout<<movieList[i].rTomatoesRanking<<"%"<<"\t\t\t"<<movieList[i].imdbRanking<<endl;


}

}
int main (){
int num,choice;

  
cout<<"\n\t\t\tWELLCOME TO MOVIE/SHOW BOOKING SYSTEM"<<endl;
cout<<"\nPress 1 to book a ticket: \nPress 2 to view movie rating: "<<endl;
cin>>choice;
switch(choice){
    case 1:
   cout<<"\nPlease enter the number of tickets you want to book: ";
cin>>num; 

    for (int i=0;i<num;i++){
    
    cout<<"\nPlease enter the name of client number "<<i+1<<":";
    cin>>(input+i)->name;
    cout<<"\nPlease enter your age:";
    cin>>(input+i)->age;
    if ((input+i)->age<18){
        cout<<"\nPlease choose a PG-rated movies";
    }
    else{
        cout<<"\nR-rated movies are available as well";
    }
    cout<<"\nPlease enter the movie of your choice:";
cin>>(input+i)->show.movieName;
cout<<"\nPlease enter the package you want. Available packages are normal, gold and platnium. ";
cin>>(input+i)->package.level;
cout<<"\nPlease enter the seating arrangment you want:";
arrangment();
cout<<"\nEnter the row(1-4):";
cin>>(input+i)->place.row;
cout<<"\nEnter the colomn(A-P):";
cin>>(input+i)->place.colomn;
cout<<"\n\t\tPlease choose a snack and drink."<<endl;
foodoption();
cout<<"\nwhich snack would you like? ";
cin>>(input+i)->snack.food;
cout<<"which drink would you like? ";
cin>>(input+i)->snack.drink;
}
for (int i=0;i<num;i++){
    cout<<"\n\t\tDear customer you have successfully booked a tiket to watch "<<(input+i)->show.movieName<<".";
    cout<<"\n\t\tPlease grab your snack along with your drinks (if you bought any) and be seated at "<<(input+i)->package.level<<" class, "<<(input+i)->place.row<<(input+i)->place.colomn<<".";
   cout<<"\n\t\t\t\t\t\tENJOY";


}
break;
 case 2:
  displayMovies(movNaming);












}

  return 0;
}
