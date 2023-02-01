#include<iostream>
using namespace std;
int main()
{
//.Dichiarazione delle variabili
bool v=false;
int cont=0;
int lunghezza;
int vet[lunghezza];
int contas=0;
int contain=0;
//.Acquisizione dati di imput e output
cout<<"Inserisci il numero di alunni che hanno svolto il compito:"<<endl;
cin>>lunghezza;
cout<<endl;

for(cont=0; cont<lunghezza; cont++)
 {
 cout<<"Inserisci voto dell'alunno numero "<< cont+1 <<endl;
 cin>>vet[cont];
 }	
//.Logica	
for(cont=0; cont<lunghezza; cont++)
{
if(vet[cont]<6)
{
contain=contain++;
}
else{
contas=contas++;
}
}
if(contas>contain)
{
v= true;
//.output
}
if(v==true)
{
cout<<"I voti sufficienti sono maggiori di quelli insufficienti"<<endl;
}
else{
cout<<"I voti insufficienti sono maggiori di quelli sufficienti"<<endl;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
