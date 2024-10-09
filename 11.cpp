#include <iostream.h>
#include <conio.h>
int add(int a, int b); 
double add(double x, double y); 
double add(int p, double q); 
double add(double p, int q);
double add(double x, double y)
{
    return x + y;
}

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}


double add(int p, double q)
{
    return p + q;
}

double add(double p, int q)
{
    return p + q;
}

int main()
{
    clrscr();
    cout << add(7, 10) << endl; 
    cout << add(34.5, 23.6) << endl;
    cout << add(12, 34.7) << endl; 
    cout << add(34.7, 12) << endl; 
    getch();
    return 0;
}
