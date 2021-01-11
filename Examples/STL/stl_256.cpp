#include <set>
#include <iostream>
#include <algorithm>
#include <iomanip>

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
void Display(std::set<T> &l) {
    std::cout << "[";
    for (auto each_item : l) {
        std::cout << each_item << " ";
    }
    std::cout << "]" << std::endl;
    return;
}


void Test01() {

    std::set<int> s1 {1, 4, 9, 8, 11, 19};
    Display(s1);                            // Output - [1 4 8 9 11 19]

    std::cout << s1.count(9) << std::endl;  // 1
    std::cout << s1.count(11) << std::endl; // 1
    std::cout << s1.count(0) << std::endl;  // 0
    std::string status;

    auto r1 = s1.insert(9);    
    status = (r1.second) ? "Success" : "Failure";
    std::cout << status << std::endl;

    auto r2 = s1.insert(0);
    status = (r2.second) ? "Success" : "Failure";
    std::cout << status << std::endl;

    auto r3 = s1.insert(198);    
    status = (r3.second) ? "Success" : "Failure";
    std::cout << status << std::endl;

    auto it = s1.find(10);              // Understands how set is implemented - Binary tree
    if (it != s1.end()) {
        std::cout << "Found" << std::endl;
    } else
    {
        std::cout << "Not Found" << std::endl;
    }

    Display(s1);

    return;
}


void Test02() {

    std::set<Person> person_set;
    person_set = {
        {"Chong", 111},
        {"Ang", 11},
        {"Ong", 113},
        {"Pong", 211},
        {"Cg", 111},
    };
    Display(person_set);            // Cg not pushed because age is same

    person_set.emplace("Timma", 90);
    Display(person_set);

    person_set.emplace("Tia", 90);  // Tia not pushed becaused age is same
    Display(person_set);

    Person p {"Toona", 123};
    person_set.emplace(p);
    Display(person_set);

    // person_set.insert("Tonga", 33); // error: no matching function for call to ‘std::set<Person>::insert(const char [6], int)’
    Person p1 {"Tonga", 33};
    person_set.insert(p1);
    Display(person_set);

    auto it1 = person_set.begin();
    std::cout << *it1 << std::endl;
    it1++;
    std::cout << *it1 << std::endl;
    // it1 = it1 + 3;          // error: no match for ‘operator+’ (

    std::advance(it1, 3);
    std::cout << *it1 << std::endl;

    Person p3 = {"Toona", 123};

    auto it2 = person_set.find(p3);
    if (it2 != person_set.end()) {
        std::cout << "Found and Erase" << std::endl;
        person_set.erase(it2);
    } else {
        std::cout << "Not Found" << std::endl;
    }
    Display(person_set);

    it2 = person_set.find(Person {"Chinn", 211});   // This will delete Pong
    if (it2 != person_set.end()) {
        std::cout << "Found and Erase" << std::endl;
        person_set.erase(it2);
    } else {
        std::cout << "Not Found" << std::endl;
    }
    Display(person_set);

    return;
}

void Test03() {

    std::set<std::string> string_set {"A", "B", "C"};
    Display(string_set);

    auto status = string_set.insert("D");

    std::cout << std::boolalpha;
    std::cout << *status.first << " " << status.second << std::endl;

    Display(string_set);

    status = string_set.insert("A");

    std::cout << std::boolalpha;
    std::cout << *status.first << " " << status.second << std::endl;

    return;
}


int main() {

    Test01();

    Test02();

    Test03();

    return 0;
}