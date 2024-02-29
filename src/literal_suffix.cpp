#include <iostream>
#include <chrono>
#include <thread>

// Use the namespace for the literals

using namespace std::chrono_literals;

void simulateLongComputation(){
    // Simulate a task that takes 150 milliseconds
    std::this_thread::sleep_for(150ms);
}

int main() {
    for (int i = 0; i < 3; ++i){
        auto start = std::chrono::high_resolution_clock::now();

        simulateLongComputation();

        auto end = std::chrono::high_resolution_clock::now();

        // Measure the time taken by simulateLongComputation
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

        std::cout << "Iteration " << i + 1 << ": The task took " << duration.count() << " milliseconds.\n";

        // Wait for 5 seconds before the next iteration
        std::this_thread::sleep_for(5s);
    }
}