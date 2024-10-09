#include<iostream.h>
#include<conio.h>
void swapbyvalue(int a,int b)
{
int temp=a;
a=b;
b=temp;
cout<<"inside function-a:"<<a<<",b:"<<b<<endl;
}
int main()
{
int x=5;
int y=10;
clrscr();
cout<<"Before swapping-x"<<x<<",y:"<<y<<endl;
swapbyvalue(x,y);
cout<<"After swapping-x:"<<x<<",y:"<<y<<endl;
getch();
return 0;
}