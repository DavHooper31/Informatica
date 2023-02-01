#include<iostream>
using namespace std;
int main()
{
	int operazione=0;
	int resto=0;
	int scelta=0;
	int  n1=0;
	int  n2=0;
	do{
	
cout<<"Gentile utente, benvenuto nell'applicazione ""calcolatrice""; \n Digita 1 se vuoi fare la somma di due numeri interi \n Digita 2 se vuoi fare la sottrazione \n Digita 3 per fare la moltiplicazione \n Digita 4 per la divisione \n Digita 5 per uscire dal programma :"<<endl;
cin>>scelta;

	switch(scelta)
	{
    case 1:
    cout<<"Inserisci primo numero: "<<endl;
    cin>>n1;
     cout<<"Inserisci secondo numero: "<<endl;
     cin>>n2;
     operazione=n1+n2;
     cout<<"La somma dei due numeri e\' :"<<endl<<operazione<<endl;
    break;
    case 2:
    cout<<"Inserisci primo numero: "<<endl;
    cin>>n1;
     cout<<"Inserisci secondo numero: "<<endl;
     cin>>n2;
     operazione=n1-n2;
     cout<<"La differenza dei due numeri e\' :"<<endl<<operazione<<endl;
    break;
    case 3:
    operazione=1;
     cout<<"Inserisci primo numero: "<<endl;
    cin>>n1;
     cout<<"Inserisci secondo numero: "<<endl;
      cin>>n2;
    operazione=n1*n2;
     cout<<"Il prodotto dei due numeri e\' :"<<endl<<operazione<<endl;
	break;
	case 4:
	 cout<<"Inserisci primo numero: "<<endl;
    cin>>n1;
     cout<<"Inserisci secondo numero: "<<endl;
      cin>>n2;
     operazione=n1/n2;
     resto=n1%n2;
     cout<<"Il quoziente dei due numeri interi e\':"<<endl<<operazione<<endl<<"Con resto :"<<endl<<resto<<endl;
     break;
    default:
    	cout<<"Esco";
	 	
	 	
	 
		 }
		 
       }	
	 	while(scelta >=1 && scelta<= 4);
	 	
	return 0;

}
	 	
	
