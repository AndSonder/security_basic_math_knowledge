//
// Created by coronaPolvo on 2021/1/3.
//
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

void extendedEuclidean(int number1, int number2) {
    int a, b, i, temp;
    // a is the bigger number
    if (number1 > number2) {
        a = number1;
        b = number2;
    } else {
        a = number2;
        b = number1;
    }
    vector<int> s, t, q, r;
    // init s,t,q,r
    s.push_back(0);s.push_back(1);s.push_back(0);
    t.push_back(0);t.push_back(0);t.push_back(1);
    q.push_back(0);q.push_back(0);
    r.push_back(a);r.push_back(b);
    while (a % b != 0) {
        q.push_back(a / b);
        temp = a % b;
        a = b;
        b = temp;
        r.push_back(b);
    }
    r.push_back(0);
    q.push_back(a / b);
    for (i = 2; i < q.size() - 1; i++) {
        s.push_back(-1 * s[i] * q[i] + s[i - 1]);
        t.push_back(-1 * t[i] * q[i] + t[i - 1]);
    }
    // output excel
    cout << setw(2) << "j" << setw(9) << "sj" << setw(9) << "tj" << setw(9) << "q{j+1}" << setw(9) << "r{j+1}" << endl;
    for (i = 0; i < r.size(); i++) {
        cout << setw(2) << -3 + i << setw(9) << s[i] << setw(9) << t[i] << setw(9) << q[i]
             << setw(9) << r[i] << endl;
    }

}


int main() {
    int number1, number2;
    cin >> number1 >> number2;
    extendedEuclidean(number1, number2);
    return 0;
};
