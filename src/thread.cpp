#include <iostream>
#include <thread>
#include <vector>
#include <numeric> // For std::accumulate

// A simple function to simulate a computational task
void calculateSum(const std::vector<int>& numbers) {
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "The Sum is: " << sum << std::endl;

}

// A function to simultate an I/O task (e.g., printing messages to the console)

void printMessages() {
    for (int i = 0; i < 5; ++i){
        std::cout << "Printing message " << i << std::endl;
        //Simulate some delay
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Creating a thread to perform the computational task
    std::thread sumThread(calculateSum, numbers);
    std::thread printThread(printMessages);
    
    // Wait for both threads to complete
    sumThread.join();
    printThread.join();

    return 0;
}

