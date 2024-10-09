#include<iostream.h>
#include<conio.h>

class Marksheet {
private:
    int marks[3];     
    int total;        
    float average;    
    char grade;       

   
    void calculateTotal() {
        total = 0; 
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
    }

    
    void calculateAverage() {
        average = total / 3.0; 
    }

    
    void calculateGrade() {
        if (average >= 90) {
            grade = 'A';
        } else if (average >= 75) {
            grade = 'B';
        } else if (average >= 50) {
            grade = 'C';
        } else {
            grade = 'D';
        }
    }

public:
    
    void acceptMarks() {
        cout << "Enter marks for 3 subjects:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

   
    void calculateResults() {
        calculateTotal();   
        calculateAverage(); 
        calculateGrade();   
    }

    
    void displayMarksheet() {
        cout << "\nMarksheet:\n";
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Marksheet marksheet; 

    marksheet.acceptMarks(); 
    marksheet.calculateResults(); 
    marksheet.displayMarksheet(); 
    getch();
    return 0;
}
