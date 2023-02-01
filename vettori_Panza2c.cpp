//1. includo le librerie
#include<iostream>
using namespace std;
//2. inizio il blocco main
int main()
{
//3. dichiaro le variabili e il vettore
int i=10;
int vettore[i];
//4. logica - operazioni - algoritmo 
for( i=0; i<=10; i++)
 {
 cout<<"Inserisci elemento del vettore";
 cin>>vettore[i];
 }
 //5.stampo a video tutti gl elementi del vettore
 for(i=0; i<=10; i++)
 {
 cout<<vettore[i]<<endl;

 }
 //6.ritorno al sistema operativo
 return 0;
//7.fine
 }

