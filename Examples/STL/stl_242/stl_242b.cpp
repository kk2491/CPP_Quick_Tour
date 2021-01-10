// Creating generic array template class
// This code is only for the size template 
// Size of the array as template parameter 

#include <iostream>
#include <iomanip>

template <typename T, int N>
class Array {
    private:
    int size {N};
    T values[N];

    friend std::ostream &operator<<(std::ostream &os, const Array<T, N> &array) {
        os << "[";
        for (const auto &val : array.values) {
            os << val << " ";
        }
        os << "]";
        return os;
    }

    public:
    Array() = default;
    
    Array(T init_val) {
        for (auto &val : values) {
            val = init_val;
        }
    }

    void Fill(T value) {
        for (auto &val : values) {
            val = value;
        }
    }

    int GetSize() {
        return size;
    }

    T &operator[](int index) {
        return values[index];
    }
};


int main() {

    Array<int, 5> arr;
    std::cout << "Size : " << arr.GetSize() << std::endl;
    std::cout << "Array Elements : " << arr << std::endl;

    arr.Fill(0);
    std::cout << "Array Elements : " << arr << std::endl;

    arr.Fill(10);
    std::cout << "Array Elements : " << arr << std::endl;

    arr[1] = 222;   // arr.operator[](index)
    arr[4] = 444;
    std::cout << "Array Elements : " << arr << std::endl;

    Array<int, 30> arr_2{12};
    std::cout << "Array Elements : " << arr_2 << std::endl;

    Array<std::string, 10> str_array;
    std::cout << "String array elements : " << str_array << std::endl;

    str_array.Fill("Chong");
    std::cout << "String array elements : " << str_array << std::endl;

    str_array[1] = "Mond";
    std::cout << "String array elements : " << str_array << std::endl;

    return 0;
}

