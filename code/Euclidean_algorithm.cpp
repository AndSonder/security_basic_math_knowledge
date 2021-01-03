//
// Created by coronaPolvo on 2021/1/3.
//
#include <iostream>
using namespace std;

// euclidean algorithm can calculate the greatest common factor of two number
int Euclidean_algorithm(int number1,int number2){
    // greatest common factor
    int gcf,temp;
    if (number2>number1){
        temp = number1;
        number1 = number2;
        number2 = temp;
    }
    while (number1%number2){
        temp = number1;
        number1 = number2;
        number2 = temp%number2;
    }
    return number2;
}

int main(){
    int number1,number2;
    cin >> number1 >> number2;
    cout << Euclidean_algorithm(number1,number2);
}


/** Examples
In:
37516 20041
Out:
1

In:2 14
Out:2
**/








