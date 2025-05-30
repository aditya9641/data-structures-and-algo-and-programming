#include<bits/stdc++.h>
using namespace std;

/*
take the age from the user and then decide accordingly
1. if age < 18
    print -> not eligibale for the job
2. if age  >= 18 and age <= 54,
    print -> "eligible for job"
3.if age >= 55 and age<=57
    print > "eligible for the job, retirement is soon."
4.if age > 57
    print-> "retirement time"
    */

// int main(){
//     int age;
//     cin >> age;
//     if(age < 18){
//         cout << "not eligible for the job ";
//     }
//     else if(age <= 54) {
//         cout << "eligible for the job";
//     }
//     else if(age <= 57){
//         cout << "eligible for job, but retirement soon";
//     }
//     else{
//         cout << "retirement soon";
//     }
//     return 0;
// }


//iteration -2
int main(){
    int age;
    cin >> age;
    if(age < 18){
        cout << "not eligible for the job ";
    }
    // >= 18
    else if(age <= 57) {
        cout << "eligible for the job";
        if(age >= 55){
            cout << ", but retirement soon";
        }
    }
    else{
        cout << "retirement soon";
    }
    return 0;
}

//here nested loop has been discussed