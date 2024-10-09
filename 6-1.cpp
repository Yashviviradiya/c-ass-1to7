#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class space
{
  int x;
  int y;
  int z;

public:
  void getdata(int a,int b,int c);
  void display(void);
  void operator-(); 
};


void space :: getdata(int a, int b, int c)
{
  x=a;
  y=b;
  z=c;
}

void space :: display(void)
{
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;
}

void space :: operator-()
{
  x=-x;
  y=-y;
  z=-z;
}

int main()
{
  clrscr();
  space S;
  S.getdata(10,-20,30);
  cout << "S: ";
  S.display();
  cout << endl;

  -S; 
  cout << "S: ";
  S.display();
  cin.get();
  return 0;
}




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
