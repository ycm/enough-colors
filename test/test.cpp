#include <iostream>
#include <vector>

namespace TestNamespace {
    void printMessage(const std::string& message) {
        std::cout << "Message: " << message << std::endl;
    }
}

class DummyClass {
    public:
        DummyClass(int val) : value(val) {}
        int getValue() const { return value; }
        void setValue(int val) { value = val; }
    private:
        int value;
};

int main() {
    using namespace TestNamespace;
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (int n : numbers) {
        if (n % 2 == 0) {
            std::cout << n << " is even" << std::endl;
        }
    }
    return 0;
}
