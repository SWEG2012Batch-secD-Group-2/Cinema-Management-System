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

  int i, j;

  char **ptr = new char *[7];
    for(int i = 0; i<7; i++)
    {
        ptr[i] = new char[6];
    }
        for (int i = 0; i<7; i++)
            for (int j = 0; j<6; j++)
            {
                ptr[i][j] = 65 + j;
            }

  seatReservation(i,j,ptr);


 for (int i = 0; i<7; i++)
  {
    cout<<i+1<<" ";
     for (int j = 0; j<6; j++)
      {
       cout<<ptr[i][j]<<" ";
         }
        cout<<endl;
   }

  return 0;
}
