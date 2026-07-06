#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cin >> binary;
    int num = 0;

    for (int i = 0; i < binary.length(); i++)
    {
        int current_bit = binary[i] - '0';
        num = num * 2 + current_bit;
    }
    cout << num;
    return 0;
}