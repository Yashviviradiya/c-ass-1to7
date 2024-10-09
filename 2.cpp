#include <iostream.h>
#include <conio.h>
int main()
{
    double num1, num2, average;
    clrscr();

    
    cout << "Enter the first number: ";
    cin >> num1;

    
    cout << "Enter the second number: ";
    cin >> num2;

   
    average = (num1 + num2) / 2;

    
    cout << "The average of " << num1 << " and " << num2 << " is " << average << "." << endl;
    getch();
    return 0;
}
