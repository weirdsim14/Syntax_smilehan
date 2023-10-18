#include <iostream>
#include <chrono>

int main() {
    auto start_time = std::chrono::high_resolution_clock::now();

    // Some time-consuming operation
    for (int i = 0; i < 1000000; ++i) {
        // Do nothing
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();

    std::cout << "Time taken: " << duration << " milliseconds." << std::endl;

    return 0;
}
