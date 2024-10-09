#include<iostream.h>
#include<conio.h>
class Test
{
int m,n;
public:
Test(int x, int y);//Constructor Declared
void show();

};
Test:: Test(int x, int y) //Constructor Defined
{
m=x;
n=y;
}
void Test::show()
{
cout<<"M="<<m<<"\t"<<"N="<<n<<endl;
}
void main()
{
Test t1(10,20); //Implicit Call to Constructor
Test t2=Test(30,40); //Explicit Call to Constructor
cout<<"\nObject 1:"<<endl;
t1.show();
cout<<"\nObject 2:"<<endl;
t2.show();
getch();
}