#include <iostream>

#include "../include/timer.hpp"
#include "../include/digit.hpp"

using namespace std;

string digit_text (int number);

int main() {
    Timer timer;
    
    timer.start();
    cout << "\nTesting digit_text function\n";
    cout << "The text for 1 is: " << digit_text(1) << endl;
    cout << "The text for 2 is: " << digit_text(2) << endl;
    cout << "The text for 3 is: " << digit_text(3) << endl;
    cout << "The text for 4 is: " << digit_text(4) << endl;
    cout << "The text for 5 is: " << digit_text(5) << endl;
    cout << "The text for 6 is: " << digit_text(6) << endl;
    timer.stop();
    
    cout << "Execution time: " << timer.getExecutionTime() << " seconds\n";
    return 0;
}