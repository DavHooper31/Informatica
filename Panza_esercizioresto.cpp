#include<iostream>
using namespace std;
int main()
{

const float tot=3.20;
float x=0;
int cont01=0;
int cont02=0;
int cont05=0;
int cont010=0;
int cont020=0;
int cont050=0;
int cont1=0;
int cont2=0;
int cbanc5=0;
int cbanc10=0;
int cbanc20=0;
int cbanc50=0;
int cbanc100=0;
int cbanc200=0;
int cbanc500=0;

while(x<=tot)
{
x=x+2;
cont2=cont2+1;
}
while(x<=tot)
{
x=x+1;
cont1=cont1+1;
}
while(x<=tot)
{
x=x+0.50;
cont050=cont050+1;
}
while(x<=tot)
{
x=x+0.20;
cont020=cont020+1;
}
while(x<=tot)
{
x=x+0.10;
cont010=cont010+1;
}
while(x<=0.5)
{
x=x+0.5;
cont05=cont05+1;
}
while(x<=tot)
{
x=x+0.2;
cont02=cont02++;
}
while(x<=tot)
{
x=x+0.1;
cont01=cont01++;
}
cout<<"le monete totali da 2 euro erogate sono"<<cont2;
cout<<"le monete totali da 1 euro erogate sono"<<cont1;
cout<<"le monete totali da 50 centesimi erogate sono"<<cont050;
cout<<"le monete totali da 20 centesimi erogate sono"<<cont020;
cout<<"le monete totali da 10 centesimi erogate sono"<<cont010;
cout<<"le monete totali da 5 centesimi erogate sono"<<cont05;
cout<<"le monete totali da 2 centesimi erogate sono"<<cont02;
cout<<"le monete totali da 1 centesimo erogate sono"<<cont01;
return 0;
}




























