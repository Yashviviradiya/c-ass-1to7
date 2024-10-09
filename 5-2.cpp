#include <iostream.h>
#include <conio.h>

class code
{
  int id;
  public:
    code()
     {
     }

     code(int a)
     {
	id=a;
     }

     code(code &x)
     {
       id = x.id;
     }

     void display(void)
     {
       cout << id;
     }
};


int main()
{
   clrscr();
   code A(100);  
   code B(A);   
   code C=A;   

   code D; 
   D = A; 

   cout << endl << "id of A: ";
   A.display();
   cout << endl << "id of B: ";
   B.display();
   cout << endl << "id of C: ";
   C.display();
   cout << endl << "id of D: ";
   D.display();
   getch();
   return 0;
 }


                                                    
