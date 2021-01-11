#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <queue>

template <typename T>
void Display(std::queue<T, std::vector<T>> qt) {

    std::cout << "[";
    while (!qt.empty()) {
        auto q = qt.front();
        std::cout << q << " ";
        qt.pop();
    }
    std::cout << "]" << std::endl;

    return;
}



template <typename T>
void Display(std::queue<T> qt) {

    std::cout << "[";
    while (!qt.empty()) {
        auto q = qt.front();
        std::cout << q << " ";
        qt.pop();
    }
    std::cout << "]" << std::endl;

    return;
}

void Test01() {

    // std::stack<int> q1 {1, 3, 5, 7}; // error: no matching function for call to ‘std::stack<int>::stack(<brace-enclosed initializer list>)
    std::queue<int> q1;                 // By default deque is considered

    // std::queue<int, std::vector<int>> q2;  // check - is this supported
    std::queue<int, std::list<int>> q3;
    std::queue<int, std::deque<int>> q4;

    for (int i = 0; i < 5; i++) {
        q1.push(i);
    }
    Display(q1);        // [4 3 2 1 0 ]

    std::cout << "Front : " << q1.front() << std::endl;
    std::cout << "Back  : " << q1.back() << std::endl;

    q1.push(999);
    Display(q1);

    q1.pop();
    q1.pop();
    Display(q1);  

    q1.front() = 88;
    q1.back() = 77;
    Display(q1); 


    return;
}


int main() {

    Test01();

    return 0;
}