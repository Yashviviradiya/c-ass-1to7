#include<iostream.h>
#include<conio.h>
class cube
{
float length,width,depth;
public:
void accept()
{
cout<<"enter length,width and depth:";
cin>>length>>width>>depth;
}
float volume()
{
return length*width*depth;
}
void display()
{
cout<<"volume of cuboid is:"<<volume()<<endl;
}
};
int main()
{
cube c;
c.accept();
c.display();
getch();
return 0;
}