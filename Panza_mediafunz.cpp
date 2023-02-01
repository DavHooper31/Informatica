#include <iostream>
using namespace std;
float med;
void media(int a,int b)
{
med=(a+b)/2;
cout<<"La media dei due numeri e\'"<<endl<<med;
}
int main()
{

int a;
int b;
cout<<"Inserisci primo valore"<<endl;
cin>>a;
cout<<"Inserisci secondo valore"<<endl;
cin>>b;
media(a,b);	
	
return 0;  
}




