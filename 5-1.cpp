#include <iostream.h>
#include <conio.h>

class Rectangle
{
private:
    int length;
    int width;

public:
    
    Rectangle(int l = 5, int w = 3)
    {
	length = l;
	width = w;
    }

    void display() {
	cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main()
{
    clrscr();
    Rectangle rect1;          
    Rectangle rect2(8);       
    Rectangle rect3(4, 6);    

    rect1.display();
    rect2.display();
    rect3.display();
    getch();
    return 0;
}

                                               
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
