#include<iostream.h>
#include<conio.h>
class Complex
{
float x,y;
public:
void input(float real, float image)
{
x=real;
y=image;
}
friend Complex sum(Complex, Complex);
void show(Complex);

};
Complex sum(Complex c1, Complex c2)
{
Complex c3;
c3.x=c1.x+c2.x;
c3.y=c1.y+c2.y;
return(c3);
}
void Complex::show(Complex c)
{
cout<<c.x<<"+i"<<c.y<<endl;
}
void main()
{
Complex A,B,C;
clrscr();
A.input(3.1,3.3);
B.input(4.4,5.5);
C=sum(A,B);
cout<<"A=";A.show(A);
cout<<"B=";A.show(B);
cout<<"C=";A.show(C);
getch();
}