#include<iostream.h>
#include<conio.h>
#include<string.h>
class BankAccount {
private:
    char depositorname[50];
    int accountnumber;
    char accounttype[20];
    double balance;

public:

   void assigninitialvalues(const char* name,int accnumber,char* acctype,double balance)
{
strcpy(depositorname,name);
accountnumber=accnumber;
strcpy(accounttype,acctype);
balance=balance;
}
void deposit (double amount)
{
balance+=amount;
}
void withdraw(double amount)
{
if(amount<=balance)
{
balance-=amount;
}
else
{
cout<<"\n sufficient balance"<<endl;
}
}
void display()
{
cout<<"depositer name:"<<depositorname<<endl;
cout<<"balance:"<<balance<<endl;
cout<<"accounttype:"<<accounttype<<endl;
cout<<"accountnumber:"<<accountnumber<<endl;
}
};
int main()
{
BankAccount account;
account.assigninitialvalues("xyz",12345,"savings",10000.0);
account.deposit(500.0);
account.withdraw(200.0);
account.display();
getch();
return 0;
}
