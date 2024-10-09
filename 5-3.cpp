
#include <iostream.h>
#include <conio.h>


class Rectangle
{
    int length, breadth;

public:
    
    Rectangle(int l, int b)
    {
	length = l;
	breadth = b;
    }

    
    int area()
    {
	return length * breadth;
    }
};

int main()
{
    int len, brd;
    clrscr();
    
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the breadth of the rectangle: ";
    cin >> brd;

    
    Rectangle rect(len, brd);

    
    cout << "Area of the rectangle: " << rect.area() << endl;
    getch();
    return 0;
}


                                           
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
