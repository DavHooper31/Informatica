#include <iostream>
using namespace std;

double media(double a,double b)
{
double med;
med=(a+b)/2;
return med;
}
int main()
{
	double ciuccio;
double a;
double b;
cout<<"Inserisci primo valore"<<endl;
cin>>a;
cout<<"Inserisci secondo valore"<<endl;
cin>>b;
ciuccio=media(a,b);
cout<<ciuccio<<endl;
return 0;  
}




