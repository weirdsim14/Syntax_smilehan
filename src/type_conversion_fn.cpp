// Imagine you have a Temperature class that holds a temperature in Celsius and you want to get the temperature in Fahrenheit without doing the math manually every time. Here's how you could use a conversion operator to achieve that:


#include <iostream>

class Temperature {
private:
    float celsius;

public:
    Temperature(float c) : celsius(c) {}

    // Conversion function to float (Fahrenheit)
    operator float() {
        return (celsius * 9.0/5.0) + 32;
    }
};

int main() {
    Temperature temp(25.0); // 25°C
    float inFahrenheit = temp;  // Uses conversion function

    std::cout << "Temperature in Fahrenheit: " << inFahrenheit << std::endl;
    return 0;
}
