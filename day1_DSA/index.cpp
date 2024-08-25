#include <bits/stdc++.h>
using namespace std;

int main(){
    //Input and Output
    cout << "Hello DSA!\n";
    cout << "Vishal Babar!\n";

    int n;
    cin >> n;
    int x;
    cin >> x;
    cout <<"The value of n Is :" << n << "and What is the value of X :" << x <<"\n";
 
     //Deta-Type
     int a = 33;
     char myLetter = 'c';
     double myDouble = 222.33333;
     string myname = "Vishal Babar";
     bool mybool = true;

     //IF-else
     int age;
     cin >> age;
     if(age <= 19){
        cout << "U are not adult\n";
     }else if(age >= 20){
        cout << "U are Adult\n";
     };

     int marks;
     cin >> marks;

     if(marks < 25){
        cout << "F";
     }else if(marks >= 25 && marks <= 44){
        cout <<"E";
     }else if(marks >= 44 && marks <= 49){
        cout << "d";
     } else{
        cout << "A";
     }

    return 0;
}