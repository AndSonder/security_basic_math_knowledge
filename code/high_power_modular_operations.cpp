//
// Created by coronaPolvo on 2021/1/3.
//
#include <iostream>
#include <queue>

using namespace std;

// calculate  a^x = b (mod n)
int highPowerModularOperation(int a, int x, int n) {
    queue<int> xBinary;
    // turn x to binary system
    while (x) {
        xBinary.push(x % 2);
        x = x / 2;
    }
    int ai = 1, bi = a;
    while (!xBinary.empty()) {
        if (xBinary.front() == 1) {
            ai = ai * bi % n;
        }
        bi = bi*bi % n;
        xBinary.pop();
    }
    return ai;
}

int main(){
    int a,x,n;
    cin >> a >> x >> n;
    int b = highPowerModularOperation(a,x,n);
    cout << b;
}