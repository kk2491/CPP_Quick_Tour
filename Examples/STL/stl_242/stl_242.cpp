// Creating generic array template class
// This code is only for the size template 
// Size of the array as template parameter 

#include <iostream>
#include <iomanip>

template <int N>
class Array {
    private:
    int size {N};
    int values[N];

    friend std::ostream &operator<<(std::ostream &os, const Array &array) {
        os << "[";
        for (const auto &val : array.values) {
            os << val << " ";
        }
        os << "]";
        return os;
    }

    public:
    Array() = default;
    
    Array(int init_val) {
        for (auto &val : values) {
            val = init_val;
        }
    }

    void Fill(int value) {
        for (auto &val : values) {
            val = value;
        }
    }

    int GetSize() {
        return size;
    }

    int &operator[](int index) {
        return values[index];
    }
};


int main() {

    Array<5> arr;
    std::cout << "Size : " << arr.GetSize() << std::endl;
    std::cout << "Array Elements : " << arr << std::endl;

    arr.Fill(0);
    std::cout << "Array Elements : " << arr << std::endl;

    arr.Fill(10);
    std::cout << "Array Elements : " << arr << std::endl;

    arr[1] = 222;   // arr.operator[](index)
    arr[4] = 444;
    std::cout << "Array Elements : " << arr << std::endl;

    Array<30> arr_2{12};
    std::cout << "Array Elements : " << arr_2 << std::endl;

    return 0;
}

