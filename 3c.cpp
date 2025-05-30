#include<bits/stdc++.h>
using namespace std;
/*
A school has following rules for grading system:
a. below 25 - f
b. 25 to 44 - e
c. 45 to 49 - d
d. 50 to 59 - c
e. 60 to 79 - b
f.80 to 100 - abortAsk user to enter merks and print the corresponding grade. 
*/

int main(){
    #include <iostream>
using namespace std;
    int marks = 54;


    if (marks < 25) {
        cout << "Grade: F" << endl;
    } else if (marks >= 25 && marks <= 44) {
        cout << "Grade: E" << endl;
    } else if (marks >= 45 && marks <= 49) {
        cout << "Grade: D" << endl;
    } else if (marks >= 50 && marks <= 59) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60 && marks <= 69) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: A" << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }

    return 0;
}


//usage of if slse instead of if will save time significantly reduce time complexity