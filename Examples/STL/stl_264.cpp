#include <iostream>
#include <queue>
#include <string>
#include <random>
#include <time.h>

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
void Display(std::priority_queue<T> pq) {
    std::cout << "[";
    
    while (!pq.empty()) {
        T element = pq.top();
        std::cout << element << " ";
        pq.pop();
    }
    

    std::cout << "]" << std::endl;
    return;
}


void Test01() {

    // std::priority_queue<int> pq {1, 3, 4}; // error: no matching function for call to ‘std::priority_queue<int>::priority_queue(<brace-enclosed initializer list>)’

    std::priority_queue<int> pq;
    srand(time(0));

    for (int i = 0; i < 20; i++) {
        int rand_num = random() % 100;
        pq.push(rand_num);
    }

    Display(pq);

    pq.push(88);

    Display(pq);

    std::cout << "size : " << pq.size() << std::endl;
    std::cout << "top  : " << pq.top() << std::endl;

    pq.pop();
    Display(pq);

    return;
}

void Test02() {

    std::priority_queue<Person> p_pq;

    p_pq.push(Person{"Chon", 12});
    p_pq.push(Person{"hon", 212});
    p_pq.push(Person{"CAAhon", 2});
    p_pq.push(Person{"hon", 1112});
    p_pq.push(Person{"nG", 452});
    p_pq.push(Person{"Con", 1456});
    p_pq.push(Person{"Chaffn", 55});
    p_pq.push(Person{"Chsfe", 55});
    p_pq.push(Person{"Chetess", 11111});

    Display(p_pq);

    std::cout << p_pq.top() << std::endl;

    p_pq.pop();
    p_pq.pop();
    Display(p_pq);

    return;
}

int main() {

    Test01();

    Test02();

    return 0;
}