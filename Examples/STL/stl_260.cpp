#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <stack>

template <typename T>
void Display(std::stack<T, std::vector<T>> st) {

    std::cout << "[";
    while (!st.empty()) {
        auto s = st.top();
        std::cout << s << " ";
        st.pop();
    }
    std::cout << "]" << std::endl;

    return;
}



template <typename T>
void Display(std::stack<T> st) {

    std::cout << "[";
    while (!st.empty()) {
        auto s = st.top();
        std::cout << s << " ";
        st.pop();
    }
    std::cout << "]" << std::endl;

    return;
}

void Test01() {

    // std::stack<int> s1 {1, 3, 5, 7}; // error: no matching function for call to ‘std::stack<int>::stack(<brace-enclosed initializer list>)
    std::stack<int> s1;                 // By default deque is considered

    std::stack<int, std::vector<int>> s2;
    std::stack<int, std::list<int>> s3;
    std::stack<int, std::deque<int>> s4;

    for (int i = 0; i < 5; i++) {
        s1.push(i);
    }
    Display(s1);        // [4 3 2 1 0 ]

    s1.pop();
    Display(s1);  

    s1.top() = 999;
    Display(s1); 

    s1.push(88);
    Display(s1);  

    // Empty stack
    while (!s1.empty()) {
        s1.pop();
    }
    Display(s1);

    s1.push(420);
    Display(s1);

    for (int i = 0; i < 5; i++) {
        s2.push(i);
    }
    s2.pop();
    Display(s2);

    s2.push(420);
    Display(s2);


    return;
}


int main() {

    Test01();

    return 0;
}