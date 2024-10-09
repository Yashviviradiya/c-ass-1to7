#include <iostream.h>
#include <conio.h>


class Rectangle
{
    int& length;
    int& width;

public:
    
    Rectangle(int& l, int& w) : length(l), width(w) {}

    int area() {
	return length * width;
    }

    void displayDimensions() {
	cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    clrscr();
    int l = 5;
    int w = 3;
    Rectangle rect(l, w); 

    rect.displayDimensions();
    cout << "Area: " << rect.area() << endl;

    l = 7;  
    w = 4;  
    rect.displayDimensions();
    cout << "Updated Area: " << rect.area() << endl;

    getch();
    return 0;
}


                                                  
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
