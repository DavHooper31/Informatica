#include<iostream>
using namespace std;
int main()
{
int eta=0;
int sesso=0;
float prezzo=0;
float tot=0;
cout<<"inserisci eta ";
do
{
cin>>eta;
cout<<"inserisci il sesso (metti 1 se sei un uomo o 0 se sei una donna)";
}
while(sesso==0 and sesso==1);
cin>>sesso;
cout<<"inserisci costo del biglietto";
cin>>prezzo;
if(eta<=18)
{
tot=(prezzo*85)/100;
cout<<"il prezzo totale è"<<tot;
}
else if(eta>=19 and eta<=64)
{
cout<<"il prezzo totale è"<<prezzo;
}
else if(eta>=65 and sesso==0)
{
tot=(prezzo*75)/100;
cout<<"il prezzo totale è"<<tot;
}
else 
{
tot=(prezzo*80)/100;
cout<<"il prezzo totale è"<<tot;
}
return 0;
}
