#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7, temp = 0;
    temp = b;
    int temp2 = c;
    b = a;
    c = temp;
    a = temp2;
    cout << a << endl << b << endl << c;
    return 0;
}