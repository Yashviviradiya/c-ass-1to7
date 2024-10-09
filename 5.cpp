#include <iostream.h>
#include <conio.h>


void f(int &x)

{
    x = x + 10; 
}

int main()

{

    clrscr();
    int m = 10;

    cout << "Initial value of m: " << m << endl; 

    f(m); 
    cout << "Value of m after calling f(): " << m << endl; 

    getch();

    return 0;
}
