#include<iostream.h>
#include<conio.h>
void swapbyreference(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
}
int main()
{
int x=5;
int y=10;
clrscr();
cout<<"before swapping-x:"<<x<<",y:"<<y<<endl;
swapbyreference(x,y);
cout<<"after swapping-x:"<<x<<",y:"<<y<<endl;
getch();
return 0;
}