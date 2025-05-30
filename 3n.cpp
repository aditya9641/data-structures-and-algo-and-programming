//take two numbers and print its sum
#include <iostream>
using namespace std;


// //way 1
// int main(){

//     int num1, num2;
//     cin >> num1 >> num2;
//     cout << num1 + num2;
//     return 0;
// }


// //way 2
// int main(){

//     int num1, num2;
//     cin >> num1 >> num2;
//     int num3 = num1 + num2;
//     cout << num3;
//     return 0;
// }


// //to modularize this - way 1
// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }

// int main(){

//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;
// }


//way 2
int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

int main(){

    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
}