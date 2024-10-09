
#include <iostream.h>
#include <conio.h>


const int size = 3;

class Vector
{
    int v[size];

public:
    Vector();                      
    Vector(int *x);                
    void display();                
};

Vector::Vector()
{
    for(int i = 0; i < size; i++)
	v[i] = 0;
}

Vector::Vector(int *x) {
    for(int i = 0; i < size; i++)
	v[i] = x[i];
}

void Vector::display() {
    for(int i = 0; i < size; i++)
	cout << v[i] << " ";
    cout << endl;
}

int main()
{
    clrscr();
    int x[size] = {2, 4, 6};  
    Vector m;                 
    Vector n = x;             
    cout << "Default vector m: ";
    m.display();  
    cout << "Initialized vector n: ";
    n.display();  

    cin.get();
    return 0;
}

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
