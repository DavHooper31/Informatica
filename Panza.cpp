#include <iostream>
using namespace std;
int main()
{
int cont=0;
int indice=0;
int tasto=0;
int vettore[indice];
int contap=0;
int contad=0;
int n=0;
int maggn=0;
  do{

    cout<<"Se inserisci 1 subito dopo dovrai caricare il vettore"<<endl<<"Se inserisci 2 stampo a video gli elementi del vettore"<<endl<<"se premi 3, conta quanti numeri pari ci sono nel vettore e stampa il risultato"<<endl<<"se premi 4, conta quanti numeri dispari ci sono nel vettore e stampa il risultato"<<endl<<"se premi 5, conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato"<<endl<<"se premi 6, esca dal programma"<<endl;
    cin>>tasto;
switch(tasto)
{
	case 1 :
		cout<<"Inserisci lunghezza del vettore";
		cin>>indice;
		for(cont=0; cont<=indice; cont++)
		{
		cout<<"Inserisci il numero"<<endl;
		cin>>vettore[indice];
		}
    case 2 :
    	for(cont=0; cont<=indice; cont++)
    	{
		cout<<vettore[indice]<<endl;
		}
	case 3 :
		cont=indice;
		for(indice=0; indice<=cont; indice++)
		{
		if(vettore[indice]%2==0)
		{
		contap=contap+1;
		}
		}
		cout<<"Il numero di numeri pari e\'"<<contap<<endl;
	case 4 :
		cont=indice;
		for(indice=0; indice<=cont; indice++)
		{
        if(vettore[indice]%2!=0)
		{
		contad=contad+1;
		}
	}
		cout<<"Il numero di numeri dispari e\'"<<contad<<endl;
		
	case 5 :
		cout<<"inserisci un numero casuale intero che andro\' a confrontare con i dati del vettore"<<endl;
		cin>>n;
		cont=indice;
		for(indice=0; indice<=cont; indice++)
		{
		if(vettore[indice]>n)
		{
		maggn=maggn++;		
		}
		}
		cout<<"Il numero di numeri maggiori del numero dato in imput e\'"<<maggn<<endl;
	case 6  :
		
		break;
			cout<<"L'imput che hai inserito e\' sbagliato"<<endl;
			
			}
	}
			while(tasto!=6);
	
	
return 0;

}
		
		
