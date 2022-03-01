#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    srand(time(0));

    string vardi[8];
    string uzvards[8];
    string produkti[8];
    int a = 0;
    int b = 0;
    int c = 0;
    int reizes = 0;
    cout << "Ludzu ievadiet personu vardus" << endl;
    for(int i = 0; i < 8; i++)
    {
         cout <<"Personas :" << i << endl;
         cin >> vardi[i];
    }
    cout << endl;
    cout << endl;
    for(int i = 0; i < 8; i++)
    {
       cout << vardi[i] << endl;
    }
    cout << endl;

    cout << "Ludzu ievadiet personu uzvardus" << endl;
    for(int j = 0; j < 8; j++)
    {
         cout <<"Personas uzvardi :" << j << endl;
         cin >> uzvards[j];
    }
    cout << endl;
    cout << endl;
    for(int j = 0; j < 8; j++)
    {
       cout << uzvards[j] << endl;
    }
     cout << endl;
      for(int k = 0; k < 8; k++)
    {
         cout <<"Produkti :" << k << endl;
         cin >> produkti[k];
    }
    cout << endl;
    cout << endl;
    for(int k = 0; k < 8; k++)
    {
       cout << produkti[k] << endl;
    }
    cout << endl;
    cout << endl;


    cout << "Ievadiet 2D masinu izmerus, robeza no 3 lidz 9" << endl;
    cin >> a;
    cin >> b;

    string Rand_Mas[a][b];
    for(int x = 0; x < a; x++)
    {
     for( int y = 0; y < b; y++)
     {
         if ( y == 0)
         {
             Rand_Mas[x][y] = to_string(x);
         }
         if ( y == 1)
         {
              Rand_Mas[x][y] = vardi[rand()%8];
         }
         if ( y == 2)
         {
             Rand_Mas[x][y] = uzvards[rand()%8];
         }
         if ( y == 3)
         {
             Rand_Mas[x][y] = "2"+to_string(((rand()%99999)+1000000));
         }

         if ( y == 4)
         {
             Rand_Mas[x][y] = "00"+to_string(((rand()%9999)+10000));
         }
         if ( y == 5)
         {
             Rand_Mas[x][y] = produkti[rand()%8];
         }



        cout <<  Rand_Mas[x][y] << " ";
     }
     cout << endl;

    }

 cout<< endl;


 cout <<"Ludzu ievadiet skaitli no 0 - 7, lai izveletos konkretu masinu marku" << endl;
 cin >> c;
 for(int i = 0; i < a; i++)
 {
     for(int j = 0; j < b; j++)
     {
         if(Rand_Mas[i][j] == vardi[c])
         {
              reizes = reizes + 1;
         }
     }
 }
 cout << endl;
    cout << endl;
cout << "Persona "<< vardi[c] <<" nopirka "<< produkti[c] << " tika atrasts " << reizes << " reizes " << endl;

    return 0;
}
// Edgars Igors Kristaps Rainers Ingolfs Peters Janis Rolands
// Berzins Abolins Cakars Biezins Alpa Lapa Lietins Janka
// piens maize burkani aboli kola kefirs cipsi sviests
