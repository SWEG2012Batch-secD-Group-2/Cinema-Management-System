#include <iostream> 
#include <string> 
#include <iomanip> 
#include <fstream> 
#include <windows.h> 
 
 
using namespace std; 
 
int totalRegAmount; 
int amount; 
 
 
 
// 
// structure sector 
// 
struct movie{ 
 
    string title, genre,director, playtime; 
    float rating; 
 
    }showmov[1000]= {{"Soul","Family","Pete Docter","3 AM",8.1}, 
                 {"Little Women","Drama","Greta Gerwig","3 AM",7.8}, 
                {"The Irishman","Crime","Martin Scorsese","4 AM",7.8}, 
                     {"Cruella","Family","Craig Gillespie","5 AM",7.4}, 
      {"Black Widow","Action","Cate Shortland","5 AM",6.8}, 
      {"Luca","Adventure","Enrico Casarosa","6 AM",7.5}, 
                     {"Emma","Drama","Jim O'Hanlon","6 AM",6.7}, 
      {"The White Tiger","Drama","Martin Sorensen","7 AM",7.1}, 
      {"Herself","Drama","Keanu Ferguson","9 AM",7.0}, 
      {"Annette","Musical","Lois Christenson","11 AM",6.5}}; 
 
struct tickets{ 
 string name; 
 char seatingclass; 
 int amountofpeople, seatingposition; 
 double price; 
}; 
 
struct beverage{ 
 char food[50], ingridients[100], type[10]; 
           //beverage definition at the time of declaration. 
}showmeal[1000]={{"burger","Bun,Beef,Chesse,Onion,lettuce,tomato,jal�peno","Fast food"}, 
             {"Taco","Chapai,Beef,Chicken,Garlic sause,onion","Fast food"}, 
    {"Pizza","cheese,Peperroni,Beef,Olive,Tomato,onion","Fast food"}, 
    {"Shawarma","pita bread,beef/chicken,jalepeno,cream sauce","Fast food"}, 
    {"Caramel Popcorn","popcorn,caramel","snack"}, 
    {"Coca-Cola","-","Drink"}, 
    {"Fanta","-","Drink"}}; 
 
                struct caddress{ 
          string email; 
            int phone; 
 
           }; 
 
struct cinfo{ 
    string name, username, password; 
    int age; 
    caddress adinfo; 
}; 
 
 
cinfo info[100]; 
cinfo ccinfo[100]; 
 
int regAmount; 
 
 
 
// 
// Functions start here 
// 
 
inline void showmovies(movie show[], int y); 
inline void showticket(tickets tik[], int m); 
inline void showbev(beverage order[], int z); 
inline void ticketing(); 
inline int deleteBeverage(beverage order[], int z); 
void c_signup(); 
void movReg(); 
void showRegMov(); 
inline void delMov(); 
void custmenu(); 
void c_accept_login(); 
void a_accept_login(); 
void a_mainmenu(); 
void mainmenu(); 
 
 
int main(){ 
     
 
    mainmenu(); 
}