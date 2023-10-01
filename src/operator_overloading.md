Operator overloading allows operators to have user-defined meanings on user-defined types (classes and structs). This feature enables you to work with user-defined types in a manner similar to built-in types. Below are the key points regarding operator overloading in C++:

    Definition:
        Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type.
        Operator overloading is used to overload or redefines most of the operators available in C++.

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