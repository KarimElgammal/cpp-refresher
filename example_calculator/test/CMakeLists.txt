enable_testing()

add_executable(calculator_test CalculatorTest.cpp)
target_link_libraries(calculator_test
    calculator
    gtest
    gtest_main
)

add_test(NAME Calculator.Operations COMMAND calculator_test)