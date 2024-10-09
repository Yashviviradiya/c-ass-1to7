#include<iostream.h>
#include<conio.h>
class Rectangle {
private:
    double length;
    double width;

public:
    
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

        Rectangle(double side) {
        length = side;
        width = side;
    }
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
    void display() {
        cout << "Length: " << length << ", Width: " << width
             << ", Area: " << area() << endl;
    }
};

int main() {
        Rectangle rect1;
    rect1.display();
    Rectangle rect2(5.0);
    rect2.display();
    Rectangle rect3(4.0, 6.0);
    rect3.display();
    getch();
    return 0;
}
