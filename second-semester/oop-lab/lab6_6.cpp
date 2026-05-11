#include <iostream>

// Fibonacci class to generate Fibonacci numbers
class Fibonacci {
private:
    int current;
    int previous;

public:
    // Constructor to initialize the first two numbers
    Fibonacci(int curr = 0, int prev = 1) : current(curr), previous(prev) {}

   // Overloading the prefix ++ operator
    Fibonacci& operator++() {
        int next = current + previous;
        previous = current;
        current = next;
        return *this;
    }

    // Overloading the postfix ++ operator
    Fibonacci operator++(int) {
        Fibonacci temp = *this;
        ++(*this);
        return temp;
    }

    // Function to display the current Fibonacci number
    void display() const {
        std::cout << current << " ";
    }
};


void generateFibonacciSeries(int n) {
    Fibonacci fib(0, 1);
    for (int i = 0; i < n; ++i) {
        fib.display();
        ++fib;
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of Fibonacci numbers to generate: ";
    std::cin >> n;

    generateFibonacciSeries(n);

    return 0;
}

