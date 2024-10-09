#include <iostream.h>
#include <conio.h>
double areaOfCircle(double radius, double pi = 3.14159)
{
    return pi * radius * radius;
}

int main()
{
    double radius = 5.0;
     cout << "Area of circle: "  << areaOfCircle(radius) << endl;
    getch();
    return 0;
}
