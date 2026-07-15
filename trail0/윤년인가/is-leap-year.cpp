#include <iostream>
using namespace std;

int main() {
    int Y;
    cin >> Y;
    cout << ((Y % 4 == 0) ? (((Y % 100 == 0) && (Y % 400 != 0)) ? "false" : "true") : "false");
    return 0;
}