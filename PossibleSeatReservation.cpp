#include <iostream>
using namespace std;

void seatReservation(int a, int b, char **ptr)
{
     if(ptr[a][b]=='X')
     cout<<"Seat Taken"<<endl;
     else
     ptr[a][b]='X';  

}



int main() {

    char **ptr = new char *[5];
    for(int i = 0; i<5; i++)
    {
        ptr[i] = new char[4];
    }
        for (int i = 0; i<5; i++)
            for (int j = 0; j<4; j++)
            {
                ptr[i][j] = 65 + j;
            }

  seatReservation(0,0,ptr);
  seatReservation(0,0,ptr);



 for (int i = 0; i<5; i++)
  {
    cout<<i+1<<" ";
     for (int j = 0; j<4; j++)
      {
       cout<<ptr[i][j]<<" ";
         }
        cout<<endl;
   }

  return 0;
}
