#include <iostream>
#include <optional>

int main() {
    // تست ویژگی C++23: optional monadic operations
    std::optional<int> opt = 42;
    
    auto result = opt.transform([](int x) { 
        return x * 2; 
    }).and_then([](int x) -> std::optional<int> {
        if (x > 50) return x;
        return std::nullopt;
    });
    
    if (result) {
        std::cout << "C++23 features work! Result: " << *result << std::endl;
    } else {
        std::cout << "C++23 detected but result too small" << std::endl;
    }
    
    // تست C++23: if consteval
    if consteval {
        std::cout << "Compiled with C++23 consteval support" << std::endl;
    }
    
    return 0;
}