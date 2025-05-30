//pass by reference




//example 1
// #include<bits/stdc++.h>
// using namespace std;

// void doSomething(string &s){
//     s[0] = 't';
//     cout << s << endl;

// }


// int main(){

//     string s = "raj";
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }




//example 2
// #include<bits/stdc++.h>
// using namespace std;

// void doSomething(int &num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;

// }


// int main(){

//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }


/*
o/p: 10
15
20
20

*/


//example 3
// #include<bits/stdc++.h>
// using namespace std;

// void doSomething(int &num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;

// }


// int main(){

//     int arr[5];
//     for(int i = 0; i<=4; i = i + 1) {
//         cin >> arr[i];
//     }

//     for(int i=0;i<=4; i = i+ 1){
//         cout << arr[0] <<endl<< arr[1] <<endl<< arr[2] ;
//     }
//     return 0;
// }


//example 4
#include<bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "value inside functions " << arr[0] <<endl;
}


int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i<=4; i = i + 1) {
        cin >> arr[i];
    }

    for(int i=0;i<=4; i = i+ 1){
        cout << arr[0] <<endl<< arr[1] <<endl<< arr[2] ;
    }
    return 0;
}