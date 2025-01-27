#include <iostream>
#include <vector>
using namespace std;

vector<int> findTwosCom(vector<int> binary) {
    int n = binary.size();
    vector<int> twosCom(n + 1, 0); // Initialize with size n+1 for potential carry

    // Step 1: Find one's complement
    for (int i = n - 1, j = n; i >= 0; i--, j--) {
        twosCom[j] = binary[i] == 0 ? 1 : 0;
    }

    // Step 2: Add 1 to the one's complement
    int carry = 1;
    for (int i = n; i >= 0; i--) {
        int sum = twosCom[i] + carry;
        twosCom[i] = sum % 2;
        carry = sum / 2;
    }

    return twosCom;
}

int main() {
    vector<int> binary = {0, 0, 0, 0, 0}; // Input binary number
    vector<int> twosCom = findTwosCom(binary);

    // Print the two's complement result
    for (int i = 0; i < twosCom.size(); i++) {
        cout << twosCom[i] << " ";
    }
    return 0;
}
