//functions

#include <iostream>
using namespace std;

// void printName(){   //void function
//     cout << "hey Striver!"; 
// }
// int main() {

//     printName();
//     return 0;
// }

// void printName(){   //void function
//     cout << "hey Striver!"; 
// }
// int main() {

//     int name;
//     cin >> name;
//     printName();
//     return 0;
// }

// void printName(string name){   //parameterized function
//     cout << "hey " << name; 
// }
// int main() {

//     string name;
//     cin >> name;
//     printName(name);

//     return 0;
// }

//the same as previous code parameterized function, for reusability
void printName(string name){   //parameterized function
    cout << "hey " << name << endl; 
}
int main() {

    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);

    return 0;
}