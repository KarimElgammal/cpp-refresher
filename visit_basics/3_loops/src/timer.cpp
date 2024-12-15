#include "../include/timer.hpp"

using namespace std::chrono;

Timer::Timer() : is_running(false) {}

void Timer::start() {
    start_time = high_resolution_clock::now();
    is_running = true;
}

void Timer::stop() {
    end_time = high_resolution_clock::now();
    is_running = false;
}

float Timer::getExecutionTime() const {
    duration<float> execution_time = end_time - start_time;
    return execution_time.count();
}