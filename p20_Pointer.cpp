#include <iostream>

// Define a simple class
class MyClass {
public:
    int data;

    // Constructor
    MyClass(int value) {
        data = value;
    }
};

int main() {
    // Create an instance of MyClass and a pointer to it
    MyClass obj(42);
    MyClass *ptr = &obj;

    // Access the 'data' member using the '->' operator
    std::cout << "Value of data using -> operator: " << &obj << std::endl;
    std::cout << "Value of data using -> operator: " << ptr->data << std::endl;
    std::cout << "Value of data using -> operator: " << obj.data << std::endl;
    std::cout << "Value of data using -> operator: " << &obj.data << std::endl;

    return 0;
}
