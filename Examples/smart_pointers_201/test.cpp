#include <iostream>
#include <memory>

class B;       // Forward declaration

class A {
    private:
    std::weak_ptr<B> b;

    public:
    void SetB(std::shared_ptr<B> b) {
        b = b;
    }

    A() {
        std::cout << "Class B Constructor" << std::endl;
    }

    ~A() {
        std::cout << "Class B Destructor" << std::endl;
    }

};

class B {
    private:
    std::weak_ptr<A> b;

    public:
    void SetA(std::shared_ptr<A> a) {
        a = a;
    }

    B() {
        std::cout << "Class B Constructor" << std::endl;
    }

    ~B() {
        std::cout << "Class B Destructor" << std::endl;
    }
};

int main() {

    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->SetB(b);
    b->SetA(a);

    return 0;
}