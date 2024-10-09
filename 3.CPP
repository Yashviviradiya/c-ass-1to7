#include<iostream.h>
#include<conio.h>
int main()
{
int num1,num2,temp;
cout<<"enter the first number:";
cin>>num1;
cout<<"enter the second number:";
cin>>num2;
cout<<"before swap:"<<endl;
cout<<"first number:"<<num1<<endl;
cout<<"second number:"<<num2<<endl;
temp=num1;
num1=num2;
num2=temp;
cout<<"after swap:"<<endl;
cout<<"first number:"<<num1<<endl;
cout<<"second number:"<<num2<<endl;
getch();
return 0;
}