#include <iostream>
#include <iomanip>
#include "../include/timer.hpp"
#include "../include/recursion.hpp"

using namespace std;

int main() {
    Timer timer;
    timer.start();

    Recursion rec;
    
    cout << "\n=== factorial and recursion test cases ===\n";
    
    cout << "\niterative factorial tests:\n";
    cout << "0! = " << rec.factorial_iterative(0).value() << endl;
    cout << "5! = " << rec.factorial_iterative(5).value() << endl;
    cout << "10! = " << rec.factorial_iterative(10).value() << endl;
    
    cout << "\nrecursive factorial tests:\n";
    cout << "0! = " << rec.factorial_recursive(0).value() << endl;
    cout << "5! = " << rec.factorial_recursive(5).value() << endl;
    cout << "10! = " << rec.factorial_recursive(10).value() << endl;
    
    cout << "\nnegative number test:\n";
    auto neg_result = rec.factorial_recursive(-1);
    if (!neg_result.has_value()) {
        cout << "(-1)! = cannot calculate factorial of negative number\n";
    }
    
    // Test large number
    cout << "\nlarge number test:\n";
    auto large_result = rec.factorial_recursive(20);
    if (large_result.has_value()) {
        cout << "20! = " << large_result.value() << endl;
    }

    cout << "\n=== Fibonacci Test Cases ===\n";
    
    // First 10 Fibonacci numbers
    cout << "\nFirst 10 Fibonacci Numbers:\n";
    for(int i = 0; i < 10; i++) {
        cout << "F(" << i << ") = " << rec.fibonacci(i).value() << endl;
    }
    
    // Test negative input
    cout << "\nNegative Number Test:\n";
    auto neg_fib = rec.fibonacci(-1);
    if (!neg_fib.has_value()) {
        cout << "F(-1) = Error: Cannot calculate Fibonacci of negative number\n";
    }
    
    // test large number
    cout << "\nLarge Number Test:\n";
    auto large_fib = rec.fibonacci(45);
    if (large_fib.has_value()) {
        cout << "F(45) = " << large_fib.value() << endl;
    } else {
        cout << "F(45) = Error: Number too large\n";
    }

    timer.stop();
    cout << "\nExecution time: " << timer.getExecutionTime() << " seconds\n";
    
    return 0;
}