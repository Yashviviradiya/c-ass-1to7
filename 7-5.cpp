#include <iostream.h>
#include <conio.h>

class Dollars
{
public:
    double amount;

    Dollars(double amt) : amount(amt) {}

    void display()
    {
	cout << "Amount in Dollars: $" << amount << endl;
    }
};
class Rupees
{
public:
    double amount;

    Rupees(double amt) : amount(amt)
    {
    }
    operator Dollars()
    {
	return Dollars(amount / 83.0); // Assuming 1 USD = 83 INR
    }

    void display()
    {
	cout << "Amount in Rupees: " << amount << " INR" << endl;
    }
};

int main()
{
    clrscr();
    Rupees inr(8300);       
    inr.display();

    Dollars usd = inr;      
    usd.display();          
    getch();
    return 0;
}

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
