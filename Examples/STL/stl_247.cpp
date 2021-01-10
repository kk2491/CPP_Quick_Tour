#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <string>

class Person {
    private:
    std::string name;
    int age;
    
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs) {
        os << rhs.name << "  " << rhs.age;
        return os;
    }

    public:
    Person() = default;
    Person(std::string name, int age) : name {name}, age {age} {}
    ~Person() {}

    bool operator<(const Person &rhs) {
        return this->age < rhs.age;
    }

    bool operator==(const Person &rhs) {
        return ((this->name == rhs.name) && (this->age == rhs.age));
    }
};

void FindAlgorithm() {

    std::cout << "======== Find in Vector - Integer ==========" << std::endl;
    std::vector<int> int_vector {10, 34, 33, 122, 44, 13, 10, 445, 4432, 1234};
    auto int_loc = std::find(int_vector.begin(), int_vector.end(), 10);
    if (int_loc != int_vector.end()) {
        std::cout << "Element " << *int_loc << " found" << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    int_loc = std::find(int_vector.begin(), int_vector.end(), 4114);
    if (int_loc != int_vector.end()) {
        std::cout << "Element " << *int_loc << " found" << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    std::cout << "======== Find in Vector - Double ==========" << std::endl;
    std::vector<double> double_vector {10.11, 34.3, 33.12, 122.43, 44.32, 13.11, 1.76, 445.43, 4432.0, 1234.11};
    auto double_loc = std::find(double_vector.begin(), double_vector.end(), 33.12);
    if (double_loc != double_vector.end()) {
        std::cout << "Found" << std::endl; 
    } else {
        std::cout << "Not found" << std::endl;
    }

    double_loc = std::find(double_vector.begin(), double_vector.end(), 33.11);
    if (double_loc != double_vector.end()) {
        std::cout << "Found" << std::endl; 
    } else {
        std::cout << "Not found" << std::endl;
    }

    std::cout << "===== Person - List =======" << std::endl;
    std::list<Person> person_list {
        {"kk", 29},
        {"pk", 40},
        {"mk", 55},
        {"dk", 13},
        {"bk", 01}
    };

    Person to_find{"pk", 40};
    auto p_loc = std::find(person_list.begin(), person_list.end(), to_find);
    if (p_loc != person_list.end()) {
        std::cout << "Person found" << std::endl;
    } else {
        std::cout << "Person not found" << std::endl;
    }

    Person new_person{"ck", 11};
    to_find = new_person;
    p_loc = std::find(person_list.begin(), person_list.end(), to_find);
    if (p_loc != person_list.end()) {
        std::cout << "Person found" << std::endl;
    } else {
        std::cout << "Person not found" << std::endl;
    }


    return;
}


void CountAlgorithm() {

    std::cout << "===== Count - Integer list =====" << std::endl;
    std::list<int> int_list {12, 34, 122, 12, 345, 12, 454, 12456, 11, 12, 1321};
    int to_count = 12;
    int count_int;
    count_int = std::count(int_list.begin(), int_list.end(), to_count);
    std::cout << to_count << " found " << count_int << " times" << std::endl;
    to_count = 1223;
    count_int = std::count(int_list.begin(), int_list.end(), to_count);
    std::cout << to_count << " found " << count_int << " times" << std::endl;
    to_count = 454;
    count_int = std::count(int_list.begin(), int_list.end(), to_count);
    std::cout << to_count << " found " << count_int << " times" << std::endl;

    std::cout << "===== Count - double vector =====" << std::endl;
    std::vector<double> double_vector {12.01, 45.41, 78.11, 78.74, 85.68, 678.145, 8796.14, 475.321, 575.1, 12.12};
    double to_count_d = 12.010;
    int count_double;
    count_double = std::count(double_vector.begin(), double_vector.end(), to_count_d);
    std::cout << to_count_d << " found " << count_double << " times" << std::endl;

    to_count_d = 1.010;
    count_double = std::count(double_vector.begin(), double_vector.end(), to_count_d);
    std::cout << to_count_d << " found " << count_double << " times" << std::endl;

    std::cout << "===== Count - Person vector =====" << std::endl;
    std::vector<Person> person_vector {
        {"Chong", 12},
        {"Peng", 144},
        {"Bodda", 13},
        {"Dumma", 45},
        {"Tibba", 74},
        {"Bonva", 16}
    };

    int person_count;

    Person person_to_count;
    person_to_count = {"Chong", 12};

    person_count = std::count(person_vector.begin(), person_vector.end(), person_to_count);
    std::cout << person_to_count << " found " << person_count << " times" << std::endl;

    person_to_count = {"Dim", 12};

    person_count = std::count(person_vector.begin(), person_vector.end(), person_to_count);
    std::cout << person_to_count << " found " << person_count << " times" << std::endl;

    return;
}


void CountIfAlgorithm() {

    std::cout << "======== Int vector Countif ========" << std::endl;
    int count = 0;
    std::vector<int> int_vec {12, 44, 12, 34, 11, 12, 45, 112, 1245, 11, 124, 11};
    count = std::count_if(int_vec.begin(), int_vec.end(), [](int x) {return x % 2 == 0;});
    std::cout << "Condition 1 : " << count << std::endl;

    count = std::count_if(int_vec.begin(), int_vec.end(), [](int x) {return x % 3 == 0;});
    std::cout << "Condition 2 : " << count << std::endl;

    count = std::count_if(int_vec.begin(), int_vec.end(), [](int x) {return x > 10;});
    std::cout << "Condition 3 : " << count << std::endl;

    return;
}


void ReplaceAlgorithm() {

    std::vector<int> int_vector {1, 3, 4, 1, 4, 3, 1, 44, 1, 3};

    for (auto it = int_vector.begin(); it != int_vector.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::replace(int_vector.begin(), int_vector.end(), 1, 999);

    for (auto it = int_vector.begin(); it != int_vector.end(); it++) {
        std::cout << *it << std::endl;
    }

    return;
}

void AllOfAlgorithm() {

    std::vector<int> int_vector {-11, 3, 4, 1, 4, 3, 1, 44, 1, 3};

    bool status;
    status = std::all_of(int_vector.begin(), int_vector.end(), [](int x) {return x > 10;});

    if (status) {
        std::cout << "All elements are greater than 10" << std::endl;
    } else {
        std::cout << "All elements are not greater than 10" << std::endl;
    }

    status = std::all_of(int_vector.begin(), int_vector.end(), [](int x) {return x > 0;});
    if (status) {
        std::cout << "all positives" << std::endl;
    } else {
        std::cout << "not all positives" << std::endl;
    }

    return;
}

void StringTransformTest() {

    std::string str = "Make me upper case";
    
    std::cout << "Before : " << str << std::endl;
    std::transform(str.begin(), str.end(), str.begin(),::toupper);
    std::cout << "After  : " << str << std::endl;

    return;
}

int main() {

    FindAlgorithm();

    CountAlgorithm();

    CountIfAlgorithm();

    ReplaceAlgorithm();

    AllOfAlgorithm();

    StringTransformTest();

    return 0;
}