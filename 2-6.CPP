#include<iostream.h>
#include<string.h>
#include<iomanip.h>
#include<conio.h>
#include<stdio.h>
double calculatecharges(int units)
{
double charges=0.0;
if(unit<=100)
{
charges=unit*0.60;
}
else if(units<=300)
{
charges=100*0.60+(units-100)*0.80;
}
else
{
charges=100*0.60+200*0.80+(units-300)*0.90;
}
if(charges<50.0)
{
charges=50.0;
}
if(charges>300.0)
{
charges+=charges*0.15;
}
return charges;
}
int main()
{
clrscr();
char name[50];
int units;
cout<<"enter your name:";
gets(name);
cout<<"enter the number of units consumed:";
cin>>units;
double charges=calculatecharges(units);
cout<<"name:"<<name<<endl;
cout<<"units consumed:"<<units<<endl;
cout<<"charges:Rs."<<charges<<endl;
getch();
return 0;
}