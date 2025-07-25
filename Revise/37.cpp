#include <iostream>
#include <cmath>

using namespace std;

// int binaryToDecimal(int n) {
//     int ans = 0, i = 0;
//     while (n != 0) {
//         int digit = n % 10;
//         if (digit == 1) {
//             ans = ans + pow(2, i);
//         }
//         n = n / 10;
//         i++;
//     }
//     return ans;
// }

int binaryToComplement(int x) {
    // not working 
    int result = 0;
    int signBit = x & (1 << 31); // Extract the sign bit

    // If the number is negative, find its two's complement
    if (signBit != 0) {
        // Flip all bits
        x = ~x;
        // Add 1 to get the two's complement
        x += 1;
    }

    return x;
}

int decimalToBinary(int n) {
    int ans = 0, i = 0;
    while (n != 0) {
        int bit = n & 1;
        ans = (bit * pow(10, i) + ans);
        n = n >> 1;
        i++;
    }
    return binaryToComplement(ans);
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int result = decimalToBinary(n);

    

    cout  << result << endl;

    return 0;
}
