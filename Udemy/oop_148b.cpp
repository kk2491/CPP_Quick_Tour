#include <iostream>
#include <string>

class Shallow {
    // private:
    // int *data_ptr;
    
    public:
    int *data_ptr;
    // Constructor
    Shallow(int data);
    
    // Copy Constuctor
    // Shallow(const Shallow &source);
    
    // Destructor
    ~Shallow();

    void SetData();
};

// Constructor
Shallow::Shallow(int data) {
    data_ptr = new int;     // Allocated from Heap
    *data_ptr = data;
    std::cout << "Data : " << *data_ptr << "  Address : " << data_ptr << std::endl;
}

// Shallow::Shallow(const Shallow &source)
//     :   data_ptr {source.data_ptr} {
    
//     std::cout << "Shallow Copy Constructor" << std::endl;
//     std::cout << "Shallow Copy Data : " << *data_ptr << "  Address : " << data_ptr << std::endl;
// }

Shallow::~Shallow() {
    delete data_ptr;
    std::cout << "Destuctor called" << std::endl;
}

void DisplayData(Shallow obj) {
    std::cout << "Display" << std::endl;
}

int main() {

    Shallow obj_1 {100};
    DisplayData(obj_1);

    std::cout << "After destruction 1 : " << std::endl;

    Shallow obj_2 = obj_1;

    std::cout << "After destruction 2 : " << std::endl;

    return 0;
}