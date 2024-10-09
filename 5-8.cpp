#include <iostream.h>
#include <conio.h>

class MyClass
{
    int value;  
public:
    MyClass(int v) : value(v) {}  
    void display()
    {
	cout << "Value: " << value << endl;
    }

    void setValue(int v)
    {
	value = v;
    }
};

int main()
{
    clrscr();

    MyClass obj(10);  

    
    void (MyClass::*ptrToDisplay)() = &MyClass::display;

    
    void (MyClass::*ptrToSetValue)(int) = &MyClass::setValue;

    
    (obj.*ptrToDisplay)(); 

    
    (obj.*ptrToSetValue)(20);  

    
    (obj.*ptrToDisplay)();  

    getch();
    return 0;
}









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                











                                                                                
                                                                                
