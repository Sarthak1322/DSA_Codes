#include <iostream>
using namespace std;

// Function to count the number of set bits in a number
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1; // Add 1 if the last bit is set
        n >>= 1;       // Right shift the number by 1 to check the next bit
    }
    return count;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int totalSetBits = countSetBits(num1) + countSetBits(num2);
    cout << "Total number of set bits in both numbers: " << totalSetBits << endl;

    return 0;
}
