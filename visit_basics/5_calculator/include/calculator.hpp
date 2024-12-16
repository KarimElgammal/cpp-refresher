#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <optional>

template<typename T>
class Calculator {
public:
    std::optional<T> add(T a, T b) {
        return a + b;
    }
    
    std::optional<T> subtract(T a, T b) {
        return a - b;
    }
    
    std::optional<T> multiply(T a, T b) {
        return a * b;
    }
    
    std::optional<T> divide(T a, T b) {
        if (b == 0) {
            return std::nullopt;
        }
        return a / b;
    }
};

#endif