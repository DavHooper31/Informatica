#include<iostream>
using namespace std;
int main()
{
	
 const int righe=2;
 const int colonne=3;	
 int cr;
 int cc;
 int matrice[cr][cc];
cout<<"FASE DI FETCH DEGLI ELEMENTI DELLA MATRICE"<<endl;
  for(cc=0; cc<colonne; cc++)
 {
 	for(cr=0; cr<righe; cr++)
 	{
 	cout<<"inserisci l'elemento della posizione "<<cr<<","<<cc<<":"<<endl;
 	cin>>matrice[cr][cc];
	 }
 }
 cout<<"STAMPO A VIDEO GLI ELEMENTI DELLA MATRICE"<<endl;
  for(cc=0; cc<colonne; cc++)
 {
 	for(cr=0; cr<righe; cr++)
 	{
 	cout<<"L'elemento della posizione  "<<cr<<","<<cc<<" e\' :"<< matrice[cr][cc]<<endl;
 	
	 }
 }
 cout<<"FINE DEL PROGRAMMA";

return 0;
}
     
     
     
     
     
     
