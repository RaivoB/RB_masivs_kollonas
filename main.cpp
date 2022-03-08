#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    srand(time(0));
     fstream file;
     string vards, uzvardi, produkts, filename;
    string vardi[8];
    string uzvards[8];
    string produkti[8];
    int a = 0;
    int b = 0;
    int c = 0;
    int reizes = 0;

    filename = "vardi.txt";

    file.open(filename.c_str());





    cout << "Ludzu ievadiet personu vardus" << endl;
    for(int i = 0; i < 8; i++)
    {
         cout <<"Personas :" << i << endl;
         file >> vards;
        cout << vards << endl;
       vardi[i] = vards;
    }
    cout << endl;
    cout << endl;
    for(int i = 0; i < 8; i++)
    {
       cout << vardi[i] << endl;
    }
    cout << endl;
    file.close();


    filename = "uzvardi.txt";
    file.open(filename.c_str());


    cout << "Ludzu ievadiet personu uzvardus" << endl;
    for(int j = 0; j < 8; j++)
    {
         cout <<"Personas uzvardi :" << j << endl;
         file >> uzvardi;
         cout << uzvardi << endl;
         uzvards[j] = uzvardi;
    }
    cout << endl;
    cout << endl;
    for(int j = 0; j < 8; j++)
    {
       cout << uzvards[j] << endl;
    }
     cout << endl;

      file.close();

      filename = "produkti.txt";
    file.open(filename.c_str());

      for(int k = 0; k < 8; k++)
    {
         cout <<"Produkti :" << k << endl;
         file >> produkts;
         cout << produkts <<endl;
         produkti[k] = produkts;

    }
    cout << endl;
    cout << endl;
    for(int k = 0; k < 8; k++)
    {
       cout << produkti[k] << endl;
    }
    cout << endl;
    cout << endl;
    file.close();


    cout << "Ievadiet 2D masinu izmerus, robeza no 3 lidz 9" << endl;
    cin >> a;
    cin >> b;

ofstream mans_fails;
mans_fails.open("dati.txt",ios::out);

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
         mans_fails << Rand_Mas[x][y] << " ";



        cout <<  Rand_Mas[x][y] << " ";
     }
     cout << ' /n';
     mans_fails << endl;
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

mans_fails.close();

    return 0;
}
// Edgars Igors Kristaps Rainers Ingolfs Peters Janis Rolands
// Berzins Abolins Cakars Biezins Alpa Lapa Lietins Janka
// piens maize burkani aboli kola kefirs cipsi sviests
