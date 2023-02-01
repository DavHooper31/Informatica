












/*
	Name: esercizio n.1
	Copyright: 
	Author: Davide Leonardo Panza
	Date: 28/09/22 10:51
	Description: ho creato un programma che dato un numero in input lo moltiplica per 3 e sottrae 5 
*/


//1. includo le librerie
#include<iostream>

//2. inizio il blocco main
using namespace std;
int main()

//3. dichiaro e inizializzo le variabili
{
int sconto=0;
float tot;
float prezzo=0;


//5. input

cout<<"inserire il prezzo";
cin>>prezzo;
cout<<"inserire sconto";
cin>>sconto;

//6. logica - operazioni - algoritmo

tot=(sconto*prezzo)/100;

//7. output

cout<<"il prezzo totale è"<<tot;

//8. ritorno al sistema operativo

return 0;

//9. fine del programma

}
