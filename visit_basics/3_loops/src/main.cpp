#include <iostream>
#include <vector>
#include <string>

#include "../include/timer.hpp"

using namespace std;

int main() {
    Timer timer;
    
    timer.start();
    cout << "Using for loop to print weekdays from a vector\n";
    vector<string> weekdays = {
        "Monday", "Tuesday", "Wednesday", "Thursday", 
        "Friday", "Saturday", "Sunday"
        };

    cout << "Using range based for loop\n";
    int day_num = 1;
    for (const string& day: weekdays) {
        cout << "Day: " << day_num++ << " is: " << day << endl;
    }
    
    timer.stop();
    
    cout << "Execution time: " << timer.getExecutionTime() << " seconds\n";
    return 0;
}