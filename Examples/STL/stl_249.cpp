#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

class Person {

    friend std::ostream &operator<<(std::ostream &os, const Person &person_obj) {
        os << std::setw(10) << person_obj.name << std::setw(10) << person_obj.age << std::endl;
        return os;
    }

    private:
    std::string name;
    int age;
  
    public:
    Person() = default;
    Person(std::string name, int age) : name {name}, age {age} {}
    ~Person() {}
    bool operator<(const Person &rhs) {
        return (this->age < rhs.age);
    }

    bool operator==(const Person &rhs) {
        return (this->age == rhs.age && this->name == rhs.name);
    }

};


void DisplayInt(const std::vector<int> &vector) {

    std::cout << "[";
    std::for_each(vector.begin(), vector.end(), [](int x) {std::cout << x << "  ";});
    std::cout << "]" << std::endl;
    return;
}


template <typename T>
void Display(const std::vector<T> &vector) {

    std::cout << "[";
    for (auto each_item : vector) {
        std::cout << each_item << "  ";
    }
    std::cout << "]" << std::endl;

    return;
}

void Test01() {

    std::vector<int> vector {1, 2, 4, 12, 4, 5};
    DisplayInt(vector);
    Display(vector);

    std::vector<double> d_vec {1.0, 4.9, 6.1, 9.11};
    Display(d_vec);

    std::vector<Person> p_vector {
        {"KK", 10},
        {"DK", 190},
        {"MK", 1113},
        {"CK", 145},
        {"QK", 11},
    };
    Display(p_vector);

    std::vector<int> vector_2 (10, 200);    // 10 elements with value 200
    Display(vector_2);

    return;
}

void Test02() {

    std::vector<int> int_vector {1, 2, 4, 6, 7, 9, 11};
    std::cout << "Int vector size       : " << int_vector.size() << std::endl;
    std::cout << "Int vector capacity   : " << int_vector.capacity() << std::endl;
    std::cout << "Int vector maxsize    : " << int_vector.max_size() << std::endl;

    int_vector.push_back(190);
    std::cout << "Int vector size       : " << int_vector.size() << std::endl;
    std::cout << "Int vector capacity   : " << int_vector.capacity() << std::endl;
    std::cout << "Int vector maxsize    : " << int_vector.max_size() << std::endl;

    int_vector.shrink_to_fit();
    std::cout << "Int vector size       : " << int_vector.size() << std::endl;
    std::cout << "Int vector capacity   : " << int_vector.capacity() << std::endl;
    std::cout << "Int vector maxsize    : " << int_vector.max_size() << std::endl;

    int_vector.reserve(100);
    std::cout << "Int vector size       : " << int_vector.size() << std::endl;
    std::cout << "Int vector capacity   : " << int_vector.capacity() << std::endl;
    std::cout << "Int vector maxsize    : " << int_vector.max_size() << std::endl;

    Display(int_vector);

    return;
}

void Test03() {

    std::vector<int> int_vector {3, 4, 1, 4, 11, 90, 11};

    std::cout << int_vector.at(4) << std::endl;
    std::cout << int_vector[2] << std::endl;

    Display(int_vector);

    int_vector.at(4) = 99999;
    int_vector[0] = 0;

    Display(int_vector);

    return;
}


void Test04() {

    std::vector<Person> human;
    Display(human);

    human.push_back({"chong", 11});
    Display(human);

    Person p1 {"hhh", 55};
    human.push_back(p1);
    Display(human);

    Person p2 {"kk", 56};
    human.push_back(p2);
    
    human.push_back({"Tm", 11});

    Display(human);

    human.pop_back();
    Display(human);

    return;
}


void Test05() {

    std::vector<int> int_vector {1, 4, 5, 9, 90, 11, 43, 41, 90, 44, 112, 109};
    Display(int_vector);

    int_vector.push_back(999);
    int_vector.clear();
    Display(int_vector);
    int_vector = {1, 4, 5, 9, 90, 11, 43, 41, 90, 44, 112, 109, 111, 1111};
    Display(int_vector);

    int_vector.erase(int_vector.begin(), int_vector.begin() + 2);
    Display(int_vector);

    std::vector<int>::iterator it = int_vector.begin();

    while (it != int_vector.end()) {
        if (*it % 2 == 0) {
            int_vector.erase(it);
        } else {
            it++;       // Note: increment only if item is not erased 
        }
    }
    Display(int_vector);

    return;
}

void Test06() {

    std::vector<int> vec_1 {1, 3, 4, 56, 89};
    std::vector<int> vec_2 {99, 8, 1};

    Display(vec_1);
    Display(vec_2);

    vec_1.swap(vec_2);

    Display(vec_1);
    Display(vec_2);

    return;
}

void Test07() {

    std::vector<int> vec_1 {1111, 3, 4, 56, 89, 1, 4};
    Display(vec_1);

    std::sort(vec_1.begin(), vec_1.end());
    Display(vec_1);

    return;
}

void Test08() {

    std::vector<int> vec_1 = {1, 2, 30, 45, 67, 90};
    std::vector<int> vec_2 = {100, 200, 300};

    Display(vec_1);
    Display(vec_2);

    std::copy(vec_1.begin(), vec_1.end(), std::back_inserter(vec_2));
    // vec_2 = vec_2 + vec_1
    // vec_1 is being copied to vec_2 at the back
    Display(vec_1);
    Display(vec_2);

    vec_1.clear();
    vec_2.clear();

    vec_1 = {1, 2, 30, 45, 67, 90, 100, 200};
    vec_2 = {100, 200, 300, 2, 11, 33};

    Display(vec_1);
    Display(vec_2);

    std::copy_if(vec_1.begin(), vec_1.end(), std::back_inserter(vec_2), [](int x) {return x % 2 == 0;});

    Display(vec_1);
    Display(vec_2);

    return;
}

void Test09() {

    std::vector<int> vec_1 {1, 2, 3, 4, 5};
    std::vector<int> vec_2 {5, 4, 3, 2, 1};
    std::vector<int> vec_3;

    std::transform(vec_1.begin(), vec_1.end(), vec_2.begin(), std::back_inserter(vec_3), [](int x, int y) {return x * y;});

    Display(vec_3);

    return;
}


void Test10() {

    std::vector<int> vec_1 {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> vec_2 {10, 20, 30, 40, 50};

    std::vector<int>::iterator insert_it = vec_1.begin() + 2;
    Display(vec_1);
    vec_1.insert(insert_it, 999);
    Display(vec_1);
    insert_it = vec_1.begin() + 2;
    vec_1.erase(insert_it);
    Display(vec_1);


    insert_it = vec_1.begin() + 2;
    vec_1.insert(insert_it, vec_2.begin(), vec_2.end());
    Display(vec_1);

    auto it = std::find(vec_1.begin(), vec_1.end(), 3);
    if (it != vec_1.end()) {
        vec_1.insert(it, vec_2.begin(), vec_2.end());
    } else {
        std::cout << "Not found" << std::endl;
    }
    Display(vec_1);

    return;
}

int main() { 

    // Test01();
    
    // Test02();

    // Test03();

    // Test04();

    // Test05();

    // Test06();

    // Test07();

    // Test08();

    // Test09();
    
    Test10();

    return 0;
}