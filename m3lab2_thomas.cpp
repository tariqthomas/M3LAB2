#include <iostream>
using namespace std;

int main() {
    
    int numericalGrade;

    
    cout << "Enter your numerical grade: ";
    cin >> numericalGrade;

   
    if (numericalGrade >= 90 && numericalGrade <= 100) {
        cout << "your letter grade is: A" << endl;
    }
    else if (numericalGrade >= 80 && numericalGrade < 90) {
        cout << "your Letter grade is : B" << endl;
    }
    else if (numericalGrade >= 70 && numericalGrade < 80) {
        cout << "your letter grade is: C" << endl;
    }
    else if (numericalGrade >= 60 && numericalGrade < 70) {
        cout << "your letter grade is: D" << endl;
    }
    else if (numericalGrade >= 0 && numericalGrade < 60) {
        cout << "your letter grade is: F" << endl;
    }
    else {
        cout << "Invalid grade entered!" << endl;
    }

    return 0;
}