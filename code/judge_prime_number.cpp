//
// Created by coronaPolvo on 2021/1/3.
//
#include <iostream>

using namespace std;

// use sieve of Eratosthenes to judge prime
bool judgePrimeNumber(int number) {
    if (number < 2) return false;
    bool flag = true;
    int sqrtNum = sqrt(number);
    int i;
    for (i = 2; i < sqrtNum; i++) {
        if (number % i == 0) {
            flag = false;
            cout << ">>>" << i << endl;
            break;
        }
    }
    return flag;
}

int main() {
    int number;
    bool result;
    cout << ">>>";
    cin >> number;
    result = judgePrimeNumber(number);
    if (result) cout << ">>>" << "YES";
    else cout << ">>>" << "No";
    return 0;
}

/** Examples
In:
1307
Out:
>>>YES

In:
1309
Out:
>>>7
>>>No
**/