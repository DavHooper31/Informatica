#include<iostream>
using namespace std;
int main()
{
int menu=0;
int pin=0;
int pin2=0;
int errori=0;

cout<<"Gentile cliente, benvenuto nll' home del tuo cellulare, se inserisci 1 imposti la password, se inserisci 2 potrai sbloccare il dispositivo senza pin:"<<endl;
cin>>menu;
switch(menu)
{

case 1:

	
	
cout<<"Inserisci il pin di 4 cifre:"<<endl;
cin>>pin;
cout<<"Il pin e\' stato inserito correttamente, procedi a sbloccare il dispositivo:"<<endl;
cin>>pin2;
if(pin==pin2)
{
cout<<"Il telefono e\'sbloccato"<<endl;
}
else
{
cout<<"Il pin non e\' corretto, reinserirlo"<<endl;
cin>>pin2;
if(pin==pin2)
{
cout<<"Il telefono e\' sbloccato"<<endl;	
}
else{
cout<<"Il pin non e\' corretto, reinserirlo"<<endl;
cin>>pin2;
if(pin==pin2)
{
cout<<"Il telefono e\' sbloccato"<<endl;	
}
else{
cout<<"Il telefono e\' bloccato"<<endl;	
}	
}
break;

case 2:

cout<<"Il telefono e\' sbloccato"<<endl;
break;
}

	}	
		

		
		return 0;

		}		
