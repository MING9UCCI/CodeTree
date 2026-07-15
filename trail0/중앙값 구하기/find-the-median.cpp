#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (A >= B) { 
        if (A >= C) {
            if (B >= C) {
                cout << B;
            } else {
                cout << C;
            }
        } else {
            cout << A;
        }
    } else {
        if (B >= C) {
            if (A >= C) {
                cout << A;
            } else {
                cout << C;
            }
        } else {
            cout << B;
        }
    }
    return 0;
}