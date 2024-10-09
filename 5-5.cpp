#include<iostream.h>
#include<conio.h> int count=0;

int count =0;
class Alpha
{
public:
 Alpha()
{
 count++;
 cout<<"No. of objects created:"<<count<<endl;
}
~Alpha()
{
 cout<<"No. of objects destroyed:"<<count<<endl;
 getch();
 count--;
}
};

int main()
{
     clrscr();
     cout<<"Main Function:"<<endl;
     Alpha D1,D2,D3,D4;
     cout<<"Re-Enter Main Function:" <<  endl;
     getch();
     return 0;
}


                                            
