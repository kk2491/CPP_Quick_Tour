#include <iostream>
#include <iomanip>
#include <list>
#include <iterator>  // To use std::advance()
#include <algorithm>

class Person {

    friend std::ostream &operator<<(std::ostream &os, Person person_obj) {
        os << person_obj.name << ":" << person_obj.age;
        return os;
    }

    private:
    std::string name;
    int age;

    public:
    Person(std::string name = "Unknown", int age = 0) : name {name}, age {age} {}
    ~Person() {};
    
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }

    bool operator<(const Person &rhs) const {
        return (this->age < rhs.age);
    }

};

template <typename T>
void Display(std::list<T> &l) {
    std::cout << "[";
    for (auto each_item : l) {
        std::cout << each_item << " ";
    }
    std::cout << "]" << std::endl;
    return;
}

void Test01() {
    std::list<int> i_list {1, 11, 111, 1111, 11111};
    Display(i_list);

    std::cout << "size : " << i_list.size() << std::endl;
    std::cout << "Max size : " << i_list.max_size() << std::endl;
    
    i_list.push_back(2);
    i_list.push_back(22);
    i_list.emplace_back(222);
    Display(i_list);

    i_list.push_front(0);
    i_list.push_front(-11);
    Display(i_list);

    i_list.pop_back();
    Display(i_list);

    i_list.pop_front();
    Display(i_list);

    return;   
}

void Test02() {

    std::list<int> i_list1 {1, 3, 4, 6, 7, 9, 10};
    Display(i_list1);
    i_list1.resize(3);
    Display(i_list1);

    std::list<Person> person_list;
    Display(person_list);
    person_list.resize(5);  // Uses Person default constructor 
    Display(person_list);

    return;
}

void Test03() {

    std::list<int> i_list1 {1, 4, 6, 9, 10, 14, 15};
    Display(i_list1);

    std::list<int>::iterator it = i_list1.begin();
    std::cout << *it << std::endl;
    it++;
    std::cout << *it << std::endl;

    // it = it + 3;                    // error: no match for ‘operator+’
    // std::cout << *it << std::endl;
    auto it1 = std::find(i_list1.begin(), i_list1.end(), 10);
    if (it1 != i_list1.end()) {
        i_list1.insert(it1, 9999);
        Display(i_list1);
    }

    std::list<int> i_list2 {888, 999, 111, 444};
    it1 = std::find(i_list1.begin(), i_list1.end(), 6);
    if (it1 != i_list1.end()) {
        i_list1.insert(it1, i_list2.begin(), i_list2.end());
        Display(i_list1);
    }
    
    auto it2 = i_list1.begin();
    std::advance(it2, 3);
    std::cout << *it2 << std::endl;
    std::advance(it2, 2);
    std::cout << *it2 << std::endl;
    std::advance(it2, -3);
    std::cout << *it2 << std::endl;

    i_list1.erase(it2);
    Display(i_list1);
    std::cout << *it2 << std::endl;

    return;
}

void Test04() {

    std::list<Person> l1;

    // Type 1
    Person p1 {"Tong", 99};
    l1.push_back(p1);
    Person p2 {"Rng", 199};
    l1.emplace_back(p2);
    
    Display(l1);

    // l1.push_back("Timmb", 11); // error: no matching function for call to 
    l1.emplace_back("Timmb", 11);
    l1.emplace_back("Toma", 21);
    l1.emplace_back("Tomara", 111);
    l1.emplace_back("Ti", 1);
    Display(l1);

    std::list<Person>::iterator it = l1.begin();
    std::advance(it, 4);
    l1.insert(it, Person{"thamma", 15});
    Display(l1);

    l1.sort();
    Display(l1);

    return;
}

int main() {

    // Test01();

    // Test02();

    // Test03();

    Test04();

    return 0;
}