#include <string>
#include <iostream>
#include <vector>     // vector
#include <algorithm>
using namespace std;


struct planes
{
	int number;
	string type;
	char keypunkt[20] = "";//key
	string time; 

};



int main()
{
	const int size = 5;
	setlocale(LC_ALL, "rus");
	char punkt[20];

	
   planes reys[size];
   reys[0] = { 101, "Пассажирский", "Moscow", "5:35" };
   reys[1] = { 51, "Грузовой", "Volgograd", "8:20"};
   reys[2] = { 35, "Пассажирский", "Vladivastoc", "4:00"};
   reys[3] = { 102, "Пассажирский", "Moscow", "3:08" };
   reys[4] = {103, "Пассажирский", "Moscow", "5:29"};
   cout << "Введите пункт назначение: ";
   cin >> punkt;

 /*  int a = reys[1].type[1];
	   cout << a;*/


   planes *temp = new planes[1];

   for (int i = 0; i < size; i++)
   {
	   for (int j = 0; j < size; j++)
	   {
		   if (reys[i].time[3] < reys[j].time[3])
		   {
			   temp[0] = reys[i];
			   reys[i] = reys[j];

			   reys[j] = temp[0];
		   }

		   if (reys[i].time[2] < reys[j].time[2])
		   {
			   temp[0] = reys[i];
			   reys[i] = reys[j];

			   reys[j] = temp[0];
		   }

		   if (reys[i].time[0] < reys[j].time[0])
		   {
			   temp[0] = reys[i];
			   reys[i] = reys[j];

			   reys[j] = temp[0];
		   }
	   }
   }

  


   
   

   

   
   for (int i = 0; i < size; i++)
   {
	   //cout << reys[i].keypunkt << endl;
	  int k = strcmp(reys[i].keypunkt, punkt);
	  // cout << k << endl;
	  // cout << punkt << endl;
	   if (k == 0)
		   cout << reys[i].number << " " << reys[i].type << " " << reys[i].time << " " << reys[i].keypunkt << endl;
	}


	 

   
   
	   
   
	  
   

  


}