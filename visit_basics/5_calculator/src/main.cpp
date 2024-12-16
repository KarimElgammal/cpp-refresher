#include <iostream>
#include <iomanip>
#include "../include/timer.hpp"
#include "../include/calculator.hpp"

using namespace std;

int main() {
    Timer timer;
    timer.start();

    Calculator<double> calc;
        
    cout << fixed << setprecision(2);
    cout << "\n=== Calculator Test Cases ===\n";
    
    cout << "\naddition tests:\n";
    cout << "10 + 5 = " << calc.add(10.0, 5.4).value() << endl;
    cout << "-7 + 3 = " << calc.add(-7.0, 3.0).value() << endl;
        
    cout << "\nsubtraction tests:\n";
    cout << "15 - 7 = " << calc.subtract(15.0, 7.0).value() << endl;
    cout << "-5 - 3 = " << calc.subtract(-5.0, 3.0).value() << endl;
    
    cout << "\nmultiplication tests:\n";
    cout << "6 * 4 = " << calc.multiply(6.0, 4.0).value() << endl;
    cout << "-3 * 5 = " << calc.multiply(-3.0, 5.0).value() << endl;
    
    cout << "\ndivision tests:\n";
    cout << "20 / 4 = " << calc.divide(20.0, 4.0).value() << endl;
        
    cout << "\ndivision by zero Test:\n";
    auto result = calc.divide(10.0, 0.0);
    if (!result.has_value()) {
        cout << "10 / 0 = Error: Division by zero\n";
    }

    timer.stop();
    cout << "\nExecution time: " << timer.getExecutionTime() << " seconds\n";
    
    return 0;
}