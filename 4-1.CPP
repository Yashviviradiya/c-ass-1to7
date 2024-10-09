#include<iostream.h>
#include<conio.h>
class complex
{
public:
int x,y;
complex()
{
x=0;
y=0;
}
complex(int a,int b)
{
x=a;
y=b;
}
complex add(complex c)
{
complex temp;
temp.x=x+c.x;
temp.y=y+c.y;
return temp;
}
void display()
{
cout<<x<<","<<y<<" "<<endl;
}
};
int main()
{
complex obj1(10,20),obj2(30,40),obj3;
obj3=obj1.add(obj2);
cout<<"obj1:";
obj1.display();
cout<<"obj2:";
obj2.display();
cout<<"obj3(sum):";
obj3.display();
getch();
return 0;
}