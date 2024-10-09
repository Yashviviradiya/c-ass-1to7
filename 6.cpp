
#include<iostream.h>
#include<conio.h>


int n = 15;

int main()
{
    clrscr();
    int n = 10; 

    {
	int k = n; 
	int n = 50; 

	cout << "This is inner block \n";
	cout << "k=" << k << ", n=" << n << ", ::n=" << ::n << "\n";
    }

    cout << "\nThis is outer block \n";
    cout << "n=" << n << ", ::n=" << ::n << "\n";
    getch();
    return 0;
}
