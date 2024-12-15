#ifndef TIMER_HPP
#define TIMER_HPP

#include <chrono>

using namespace std::chrono;

class Timer {
public:
    Timer(); // Constructor
    void start(); // Start timing
    void stop();  // Stop timing
    float getExecutionTime() const; // Get duration in seconds

private:
    time_point<high_resolution_clock> start_time;
    time_point<high_resolution_clock> end_time;
    bool is_running;
};

#endif // TIMER_HPP