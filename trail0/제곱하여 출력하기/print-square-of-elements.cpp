#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int e[N];
    for (int i = 0; i < N; i++) cin >> e[i];
    for (int i = 0; i < N; i++) cout << e[i] * e[i] << " ";
    return 0;
}