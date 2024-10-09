#include <iostream.h>
#include <conio.h>

class DynamicArray
{

    int* arr;
    int size;

public:
    
    DynamicArray(int s)
    {
	size = s;
	arr = new int[size]; 
	for (int i = 0; i < size; ++i)
	{
	    arr[i] = i + 10; 
	}
    }

    
    void display()
    {
	for (int i = 0; i < size; ++i)
	{
	    cout << arr[i] << " ";
	}
	cout << endl;
    }

    
    void deallocateMemory()
    {
	delete[] arr; 
	cout << "Memory deallocated." << endl;
    }
};

int main() {
    clrscr();
    int size;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    DynamicArray arr1(size); 
    arr1.display(); 
    arr1.deallocateMemory(); 
    getch();
    return 0;
}
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
