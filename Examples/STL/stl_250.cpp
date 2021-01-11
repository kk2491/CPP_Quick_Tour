#include <iostream>
#include <iomanip>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>



template <typename T>
void Display(std::deque<T> data) {
    std::cout << "[";
    for (const auto each_item : data) {
        std::cout << each_item << " ";
    }
    std::cout << "]" << std::endl;
}


void Test01() {

    std::deque<int> d1 {1, 2, 3, 4, 5};
    Display(d1);

    d1 = {1, 1, 1};
    Display(d1);

    d1[1] = 999;
    // d1.at(90) = 987;         // This gives run time error - What??
    // d1[100] = 90;            // Surprise no error 
    d1.at(2) = 999;
    Display(d1);

    std::deque<int> d2;
    d2 = {1, 4, 9};
    Display(d2);

    return;
}

void Test02() {

    std::deque<int> d1 {1, 1, 1, 1, 1};
    Display(d1);
    d1.push_back(100);
    Display(d1);
    d1.push_back(200);
    Display(d1);
    d1.push_front(999);
    Display(d1);
    d1.push_front(888);
    Display(d1);

    d1.pop_back();
    Display(d1);
    d1.pop_front();
    Display(d1);

    return;
}

void Test03() {

    std::deque<int> d1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    std::deque<int> d2;

    for (const auto &each_item : d1) {
        if (each_item % 2 == 0) {
            d2.push_back(each_item);
        } else {
            d2.push_front(each_item);
        }
    }
    Display(d1);
    Display(d2);

    return;
}

void Test04() {

    std::deque<int> d1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    std::deque<int> d2;
    Display(d1);

    for (const auto each_item : d1) {
        d2.push_front(each_item);
    }

    Display(d2);

    d2.clear();

    for (const auto each_item : d1) {
        d2.push_back(each_item);
    }

    Display(d2);

    // Same can be done using copy 

    d2.clear();
    std::copy(d1.begin(), d1.end(), std::front_inserter(d2));
    Display(d2);

    d2.clear();
    std::copy(d1.begin(), d1.end(), std::back_inserter(d2));
    Display(d2);

    return;

}

int main() {

    Test01();

    Test02();

    Test03();

    Test04();

    return 0;
}