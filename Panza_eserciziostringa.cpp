
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
int nstring=0;
char nome="";
//5. input
cout<<"Inserisci parola";
cin>>nome;

//6. logica - operazioni - algoritmo - output
nstring= strlen(nome)
if(nstring>7 && nstring<15)
cout<<"La stringa e' di media lunghezza";
else if(nstring<7)
cout<<"La stringa e' corta";
else if(nstring>15)
cout<<"La stringa èlunga";

//8. ritorno al sistema operativo
return 0;
}

