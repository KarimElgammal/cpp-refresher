#ifndef RECURSION_HPP
#define RECURSION_HPP

#include <optional>
#include <limits>

class Recursion {
private:
    using ullong = unsigned long long;
    static constexpr ullong max_value = std::numeric_limits<ullong>::max();

public:
    // iterative factorial
    std::optional<ullong> factorial_iterative(int n) {
        if (n < 0) return std::nullopt;
        if (n == 0) return 1ULL;
        
        ullong result = 1;
        for(int i = 1; i <= n; ++i) {
            if (result > max_value / i) {
                return std::nullopt;
            }
            result *= i;
        }
        return result;
    }

    // recursive factorial
    std::optional<ullong> factorial_recursive(int n) {
        if (n < 0) return std::nullopt;
        if (n == 0) return 1ULL;
        
        auto prev = factorial_recursive(n - 1);
        if (!prev.has_value()) return std::nullopt;
        
        ullong result = prev.value();
        if (result > max_value / n) {
            return std::nullopt;
        }
        return result * n;
    }

    // recursive fibonacci
    std::optional<ullong> fibonacci(int n) {
        if (n < 0) return std::nullopt;
        if (n <= 1) return n;
        
        auto n1 = fibonacci(n - 1);
        auto n2 = fibonacci(n - 2);
        
        if (!n1.has_value() || !n2.has_value()) return std::nullopt;
        
        if (n1.value() > max_value - n2.value()) {
            return std::nullopt;
        }
        return n1.value() + n2.value();
    }
};

#endif