#include<iostream>
using namespace std;
int main()
{
	
	const int MAX =100;
int cont;

int lunghezza=0;


int vettore1[MAX];
int vettore2[MAX];
int vettore3[MAX];

	cout<<"Inserisci lunghezza del vettore";
		cin>>lunghezza;
		
	cout<<"Inserisci vettore 1";		
		for(cont=0; cont<lunghezza; cont++)
		{
		cout<<"Inserisci il numero"<<endl;
		cin>>vettore1[cont];
		}
		
	cout<<"Inserisci vettore 2";	
		for(cont=0; cont<lunghezza; cont++)
		{
		cout<<"Inserisci il numero"<<endl;
		cin>>vettore2[cont];
		}
		
	for(cont=0; cont<lunghezza; cont++ )
		{			
        vettore3[cont]=vettore1[cont]+vettore2[cont];      
        cout<<"Il vettore con la somma due vettori e\'"<<vettore3[cont]<<endl;
        
		}
	

return 0;
}
       
