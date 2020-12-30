#include <iostream>
#include <string>
#include <vector>

class Move {
    private:
    int *data_ptr_;

    public:
    // Constructor
    Move(int data);
    // Copy Constructor
    Move(const Move &source);
    // Destructor
    ~Move();
    // Move Constructor
    Move(Move &&source) noexcept;
    void SetData(int data);
    int GetData();
};

// Constructor
Move::Move(int data) {
    data_ptr_ = new int;
    *data_ptr_ = data;
}

// Copy Constructor
Move::Move(const Move &source) {
    data_ptr_ = new int;
    *data_ptr_ = *source.data_ptr_;
    std::cout << "Copy Constructor : Deep Copy for : " << *data_ptr_ << std::endl;
}

// Move Constructor
Move::Move(Move &&source) noexcept{
    data_ptr_ = source.data_ptr_;
    source.data_ptr_ = nullptr;
    std::cout << "Moving resources" << std::endl;
}

Move::~Move() {
    if (data_ptr_ != nullptr) {
        std::cout << "Destructor called for " << *data_ptr_ << std::endl;
    } else {
        std::cout << "Destructor called for nullptr " << std::endl;
    }
    delete data_ptr_;
}

void Move::SetData(int data) {
    *data_ptr_ = data;
    return;
}

int Move::GetData() {
    return *data_ptr_;
}

int main() {

    std::vector<Move> move_vector;
    
    // With no Move Constructor - Copy constructor will be called doing Deep Copies
    move_vector.push_back(Move(100));
    move_vector.push_back(Move(200));

    move_vector.push_back(Move(300));
    move_vector.push_back(Move(400));
    move_vector.push_back(Move(500));
    move_vector.push_back(Move(600));

    return 0;
}