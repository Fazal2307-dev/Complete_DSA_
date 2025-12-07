#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int octal[32];   // array to store remainders
    int i = 0;

    // divide by 8 until num becomes 0
    while (num > 0) {
        octal[i] = num % 8;  // remainder
        num /= 8;            // reduce number
        i++;
    }

    cout << "Octal value: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << octal[j];    // print in reverse order
    }
    cout << endl;

    return 0;
}
