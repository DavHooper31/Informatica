











/*
	Name: esercizio area trianglo
	Copyright: 
	Author: Davide Leonardo Panza
	Date: 28/09/22 10:51
	Description: ho creato un programma che data la base e l'altezza del triangolo da come output la sua area
*/


//1. includo le librerie
#include<iostream>
using namespace std;
//2. inizio il blocco main
int main()
{
//3. dichiaro le variabili e le inizializzo

float b=1;
float h=1;
float a=0;



//5. input
cout<<"inserisci base";
cin>>b;
cout<<"inserisci altezza";
cin>>h;

//6. logica - operazioni - algoritmo

a=(b*h)/2;

//7. output

cout<<"l'area del triangolo è"<<a;

//8. ritorno al sistema operativo
return 0;

//9. fine del programma

}
