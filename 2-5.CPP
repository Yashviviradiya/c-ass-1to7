#include<iostream.h>
#include<conio.h>
double power(double m,int n=2)
{
return pow(m,n);
}
int main()
{
double m1=3.0;
int n1=4;
double m2=5.0;
int n2=3;
double m3=2.0;
int n3=5;
double m4=4.0;
double result1=pow(m1,n1);
double result2=pow(m2,n2);
double result3=pow(m3,n3);
double result4=pow(m4);
cout<<m1<<"raised to the power"<<n1<<"is"<<result1<<endl;
cout<<m2<<"raised to the power"<<n2<<"is"<<result2<<endl;
cout<<m3<<"raised to the power"<<n3<<"is"<<result3<<endl;
cout<<m4<<"squared is"<<result4<<endl;
getch();
return 0;
}