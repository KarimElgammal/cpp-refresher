#include "../include/digit.hpp"

string digit_text(int number) {
    string result;
    map<int, string> num_text = {
        {1, "One"}, 
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"}
    };
    if (num_text.find(number) != num_text.end()) {
        result = num_text[number];
        return result;
    } else {
        return "Number not found";
    }
}