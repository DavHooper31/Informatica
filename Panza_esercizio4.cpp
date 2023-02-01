#include<iostream>
using namespace std;
int main()
{
int min=0;
int sec=0;
int tot=0;
int sec1=0;
cout<<"inserisci i minuti presenti nel brano";
cin>>min;
cout<<"inserisci secondi del brano";
cin>>sec;
sec1=min*60;
tot=sec1+sec;
cout<<"i seconddi totali del brano sono"<<tot;
return 0;
}

