#include <iostream.h>
#include <conio.h>


class MyClass
{
 public:
    int data;  
    MyClass(int d) : data(d) {}
    void show() { cout << "Data: " << data << endl;
 }
};

  
int main()
{
    clrscr();
    int MyClass::*ptrToData = &MyClass::data;
    MyClass obj(10);
    cout << "Data using pointer to member: " << obj.*ptrToData << endl;
    getch();
    return 0;
}

                                                      
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
