#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

int main() {
    auto start = high_resolution_clock::now();
    int num = -5;
    int const num2 = 10;
    cout << "The number is: " << num << endl;
    cout << "The constant number is: " << num2 << endl;
    cout << "The sum is: " << num + num2 << endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    
    char letter = 'K';
    cout << "The letter is: " << letter << endl;
    cout << "Size of char: " << sizeof(char) << " bytes\n";
    int ASCII = (int) letter;
    cout << "ASCII value of " << letter << " is: " << ASCII << endl;
    string name = "Karim";
    cout << "My name is: " << name << endl;    
  
    
    int total_seconds = 3870;
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;
    cout << "The total seconds " << total_seconds << " is equal to " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds\n";
    int salary1 = 56000; int salary2 = 89000;
    (salary1 > salary2) ? cout<< "person1 has highest salary\n" : cout<< "person2 has highest salary\n";
    string salary_comparison = (salary1 > salary2) ? "person1 has highest salary" : "person2 has highest salary";
    cout << salary_comparison << endl;

    // using if-else
    if (salary1 > salary2) {
        cout << "person1 has highest salary\n";
    } else {
        cout << "person2 has highest salary\n";
    }

    // lets check if a character is alphabet or not, uppercase or lowercase
    char character = 'k';
    if (character >= 'A' && character <= 'Z') {
        cout << "The character is an uppercase alphabet: " << character << endl;
    } else if (character >= 'a' && character <= 'z') {
        cout << "The character is a lowercase alphabet: " << character << endl;
    } else {
        cout << "The character is not an alphabet: " << character << endl;
    }

    int number = 5;
    switch (number)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5: 
        cout << "Friday";
        break;
    case 6: 
        cout << "Saturday";
        break;
    case 7: 
        cout << "Sunday";
        break;
    default:
        cout << "Invalid week number";
        break;
    }
    cout << endl;

    // replacing the while with vectors
    vector<string> weekdays = {
        "Monday", "Tuesday", "Wednesday", "Thursday", 
        "Friday", "Saturday", "Sunday"
        };
    if (number >= 1 && number <= 7) {
        cout << "The day is: " << weekdays[number - 1] << endl;
    } else {
        cout << "Invalid week number\n";
    }

    // using do while loop
    cout << "Using do while loop\n";
    int day = 2;
    do {
        cout << "Day " << day << " is: " << weekdays[day -1] << endl;
        day++;
    } while (day <= 7);

    // for loop
    cout << endl;
    cout << "Using for loop\n";
    for (int day = 1; day <=7; day++){
        cout << "Day " << day << " is: " << weekdays[day -1] << endl;
    }

    // using range based for loop
    cout << endl;
    cout << "Using range based for loop\n";
    int day_num = 1;
    for (const string& day: weekdays) {
        cout << "Day: " << day_num++ << " is: " << day << endl;
    }




    auto end = high_resolution_clock::now();
    duration<float> execution_time = end - start;
    cout << "The total execution time for this code is: " << execution_time.count() << " seconds\n";

    return 0;
}