                                                                                                                                                                                              
#include<iostream>
using namespace std;
int main()
{
int n=0;
int cont=0;
int somma=0;
cout<<"inserisci il numero";
cin>>n;
while( cont<=n)
{
if(cont%2==0)
{
somma=somma+cont;
}
cont=cont+1;
}
cout<<somma;
return 0;
}




