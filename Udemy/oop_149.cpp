#include <iostream>
#include <string>

class Deep {
    private:
    int *data_ptr;

    public:
    // Constructor
    Deep(int data);
    // Destructor
    ~Deep();
    // Copy Constructor
    Deep(const Deep &source);

};

Deep::Deep(int data) {
    data_ptr = new int;
    *data_ptr = data;
    std::cout << "Data : " << *data_ptr << "  Pointer : " << data_ptr << std::endl;
    return;
}

Deep::~Deep() {
    delete data_ptr;
    std::cout << "Destruction Called" << std::endl;
}

Deep::Deep(const Deep &source) {
    // Can also be delegated to Constructor using
    // Deep {*sources.data_ptr} - Constructor initialization list
    data_ptr = new int;
    *data_ptr = *source.data_ptr;
    std::cout << "Copy constructor Data : " << *data_ptr << "  Address : " << data_ptr << std::endl;
    return;
}

void DisplayDeep(Deep obj) {
    std::cout << "Display" << std::endl;
}

int main() {

    Deep obj_1(1000);
    DisplayDeep(obj_1);

    Deep obj_2 = obj_1;

    return 0;
}