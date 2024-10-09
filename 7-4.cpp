
#include <iostream.h>
#include <conio.h>
class Rupees
{
public:
    double amount;

    Rupees(double amt) : amount(amt)
    {
    }

    void display()
    {
	cout << "Amount in Rupees: " << amount << " INR" << endl;
    }
};
class Dollars
{
public:
    double amount;
    Dollars(Rupees rupees)
    {
	amount = rupees.amount / 83.0; 
    }

    void display()
    {
	cout << "Amount in Dollars: $" << amount << endl;
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



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
