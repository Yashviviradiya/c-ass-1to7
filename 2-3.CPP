#include<iostream.h>
#include<conio.h>
inline int max(int a,int b)
{
return(a>b)?a:b;
}
int main()
{
int num1,num2;
cout<<"enter two integers:";
cin>>num1>>num2;
cout<<"the larger number is:"<<max(num1,num2)<<endl;
getch();
return 0;
}