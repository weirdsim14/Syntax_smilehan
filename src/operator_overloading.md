Syntax:

cpp

return_type class_name :: operator op(argument_list) {
    // ... body of the function
}

Example:
Here's a simple example of operator overloading to add two complex numbers:

cpp

    class Complex {
    public:
        int real, imag;
        Complex(int r = 0, int i =0) : real(r), imag(i) {}

        // This is automatically called when '+' is used with
        // between two Complex objects
        Complex operator + (const Complex& obj) {
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }
    };

    int main() {
        Complex c1(10, 5), c2(2, 4);
        Complex c3 = c1 + c2;  // An example call to "operator+"
        cout << c3.real << "+" << c3.imag << "i";
    }

Guidelines:
        Keep operator overloading to a minimum to maintain code readability.
        Overloaded operators should reflect the semantics of the built-in operators.
        Always make overloaded operators as member functions if they need to modify the object's data members.

Operators that cannot be overloaded:
        Scope Resolution Operator ::
        Member Selector .
        Member Pointer Selector .*
        Ternary Operator ?:

By following the syntax and guidelines, you can define how operators work with your user-defined types in a clear and intuitive manner.