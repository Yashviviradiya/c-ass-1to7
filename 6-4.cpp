#include <conio.h>
#include <iostream.h>

class complex
{
  float x;
  float y;

  public:
    complex() {}
    complex(float real, float img)
    {
       x = real;
       y = img;
    }
    friend complex operator+(complex, complex);
    void display(void);
};

complex operator+(complex c1, complex c2)
{
  complex temp;
  temp.x = c1.x + c2.x;
  temp.y = c1.y + c2.y;
  return temp;
}

void complex :: display(void)
{
  cout << x << " +j " << y << endl;
}

int main()
{
   clrscr();

   complex c1, c2, c3;
   c1 = complex(2.5, 3.5);
   c2 = complex(1.6, 2.7);
   c3 = c1 + c2;

   cout << "c1 = ";
   c1.display();
   cout << "c2 =  ";
   c2.display();
   cout << "c3 =  ";
   c3.display();

   cin.get();
   return 0;
}





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
