#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct movieInfo{

string movieName;
string genre;
double imdbRanking;
int rTomatoesRanking;
int ranking;

};
void displayMovies(movieInfo movieList[]);

int main(){

    int choice;

    movieInfo movNaming[10]= {{"Soul","Family",8.1, 95, 1},{"Little Women","Drama",7.8, 95,2},{"The Irishman","Drama",7.8, 95,3},
                     {"Cruella","Family",7.4, 74, 9},{"Black Widow","Action",6.8, 80, 7},{"Luca","Adventure",7.5, 91, 5},
                     {"Emma","Drama",6.7, 87,8},{"The White Tiger","Drama",7.1, 91,6},{"Herself","Drama",7.0, 93,4},{"Annette","Musical",6.5, 71,10}};
    cout<< "To Check Movie Ratings Please Enter 1 If Not Press Any Other Key";
    cout<< "\nYour Choice: ";
    cin>> choice;

    if(choice==1)
       displayMovies(movNaming);

    else
        cout<<endl;


return 0;
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


