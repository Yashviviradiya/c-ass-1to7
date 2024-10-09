#include <iostream.h>
#include <conio.h>
class Distance
{
private:
    int feet;
    float inches;

public:
    
    Distance(int f, float i) : feet(f), inches(i) {}
operator float()
    {
	return feet * 12 + inches; 
    }
};

int main()
{
    clrscr();
    Distance dist(5, 7.5);  
    float totalInches = dist;  
    cout << "Total distance in inches: " << totalInches << " inches" << endl;

    getch();
    return 0;
}







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
