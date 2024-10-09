#include <iostream.h>
#include <conio.h>
inline float mul(float x,float y)
{
return (x*y);
}
inline double div(double p, double q)
{
return (p/q);
}
int main()
{
 clrscr();
 float a=34.67;
 float b=9.67;
 cout<<mul(a,b)<<"\n";
 cout<<div(a,b)<<"\n";
 getch();
 return 0;
}
