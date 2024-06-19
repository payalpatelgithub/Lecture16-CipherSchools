#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    int num1 = 5, num2 = 10;
    int sum = add(num1, num2); // Function call
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

