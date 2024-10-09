#include<iostream.h>
#include<conio.h>
class data
{
int a,b;
public:
void accept()
{
cout<<"enter value for a and b:";
cin>>a>>b;
}
void display()
{
cout<<"value of a and b are:"<<a<<"and"<<b<<endl;
}
};
int main()
{
clrscr();
data d;
d.accept();
d.display();
getch();
return 0;
}