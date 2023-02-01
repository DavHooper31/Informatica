#include<iostream>
using namespace std;
int main()
{
const int MAX=100;
int matrice[MAX][MAX];
int colonne;
int righe;
int contar;
int contac=0;
int somma=0;
cout<<"Inserisci il numero delle colonne:"<<endl;
cin>>colonne;
cout<<"Inserisci il numero delle righe:"<<endl;
cin>>righe;

for(contar=0; contar<righe; contar++)
{
for(contac=0; contac<colonne; contac++)
{

cout<<"Inserisci il numero della riga "<<contar<<" e della colonna "<<contac<<": ";
cin>>matrice[contar][contac];
}
}

for(contar=0; contar<righe; contar++)
{
for(contac=0; contac<colonne; contac++)
{

somma=somma+matrice[contar][contac];
}
}
cout<<"La somma degli elementi della matrice e\':"<< somma;















return 0;
}
