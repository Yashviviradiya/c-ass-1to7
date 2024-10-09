#include<iostream.h>
#include<conio.h>
class Sum
 {
public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, float b)
    {
        return a + b;
    }
};

int main() {
    Sum sumObj;
    int int1, int2;
    float float1, float2;
    cout<<"Enter two integers:";
    cin>>int1>>int2;
    cout<<"Sum of integers:"<<sumObj.add(int1, int2)<<endl;
    cout <<"Enter two floats:";
    cin>>float1>>float2;
    cout<<"Sum of floats:"<<sumObj.add(float1, float2)<<endl;

    return 0;
}
