#include<iostream.h>
#include<conio.h>
class students
{
int id;
char name[30];
float age;
public:
void getData();
void putData();

};

void students::getData()
{
cout<<"id:";
cin>>id;
cout<<"Enter name:";
cin>>name;
cout<<"Enter age:";
cin>>age;
}
void students::putData()
{
cout<<"id:\t"<<id<<endl;
cout<<"Name:\t"<<name<<endl;
cout<<"Roll No:\t"<<age<<endl;
}
const int size=3;
void main()
{
students s[size];
clrscr();
for(int i=0;i<size;i++)
{
cout<<"\nDetails of studentd:"<<i+1<<endl;
s[i].getData();
}
cout<<endl;
for(i=0;i<size;i++)
{
cout<<"\nstudents:"<<i+1<<endl;
s[i].putData();
}
getch();
}