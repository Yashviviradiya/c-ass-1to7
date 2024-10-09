#include <iostream.h>
#include <conio.h>
#include <stdio.h>


class Rectangle
{
private:
    int length, width;

public:
    
    Rectangle() : length(0), width(0) {}

    
    friend istream& operator>>(istream &input, Rectangle &rect) {
	cout << "Enter length: ";
	input >> rect.length;
	cout << "Enter width: ";
	input >> rect.width;
	return input;
    }

    
    friend ostream& operator<<(ostream &output, Rectangle &rect)
    {
	output << "Length: " << rect.length << ", Width: " << rect.width;
	return output;
    }
};

int main()
{
    clrscr();
    Rectangle rect;
	cin >> rect;
	cout << rect << endl;
    cin.ignore();
    cin.get();
    return 0;
}


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
