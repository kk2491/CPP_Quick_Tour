#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
#include <numeric>

void DisplayArray(std::array<int, 5> &arr) {
    std::cout << "[";
    for (auto &item : arr) {
        std::cout << std::setw(10) << item;
    }
    std::cout << "]" << std::endl;
}

void DisplayArray(std::array<double, 5> &arr) {
    std::cout << "[";
    for (auto &item : arr) {
        std::cout << std::setw(10) << item;
    }
    std::cout << "]" << std::endl;
}

void Test01() {

    std::cout << "======== Test01 ========" << std::endl;

    std::array<int, 5> arr_1 {1, 2, 3, 4, 5};   // double {{}} if C++11
    std::array<int, 5> arr_2;
    std::array<int, 5> arr_3;

    DisplayArray(arr_1);
    DisplayArray(arr_2);
    DisplayArray(arr_3);

    arr_2 = {11, 22, 33, 44, 55};

    DisplayArray(arr_1);
    DisplayArray(arr_2);

    std::cout << "Size of the array 1 : " << arr_1.size() << std::endl;
    std::cout << "Size of the array 1 : " << arr_1.max_size() << std::endl;

    arr_3 = {1, 2};     // Other remaining items initialized to 0
    std::cout << "Size of the array 3 : " << arr_3.size() << std::endl;
    std::cout << "Size of the array 3 : " << arr_3.max_size() << std::endl;
    DisplayArray(arr_3);

    std::cout << "First : " << arr_1.front() << "  Last : " << arr_1.back() << std::endl;

    std::cout << "Item at 4 : " << arr_1.at(4) << std::endl;

    arr_1[0] = 99999;
    arr_1.at(1) = 99999;
    DisplayArray(arr_1);

    return;
}


void Test02() {

    std::array<double, 5> arr_1 {1.1, 2.1, 3.3, 4.43, 5.345};
    std::array<double, 5> arr_2 {11.1, 12.91, 32.11, 12.11, 11.11};

    DisplayArray(arr_1);
    DisplayArray(arr_2);

    arr_1.swap(arr_2);
    DisplayArray(arr_1);
    DisplayArray(arr_2);

    arr_2.fill(0);
    DisplayArray(arr_1);
    DisplayArray(arr_2);

    return;
}

void Test03() {

    std::array<int, 5> arr_1 {1, 2, 3, 4, 5};

    int* ptr = arr_1.data();

    std::cout << ptr << std::endl;    

    *ptr = 99999;
    ptr = ptr + 2;
    *ptr = 888;

    DisplayArray(arr_1);

    return;
}

void Test04() {

    std::array<int, 5> arr {13, 14, 90, 42, 17};

    DisplayArray(arr);
    std::sort(arr.begin(), arr.end());
    DisplayArray(arr);

    arr = {34, 56, 1, 40, 5};
    DisplayArray(arr);
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    DisplayArray(arr);

    return;
}

void Test05() {

    std::array<int, 5> arr {45, 67, 18, 19, 54};

    // std::array<int, 5>::iterator min_it = std::min(arr.begin(), arr.end() - 1);
    // std::array<int, 5>::iterator max_it = std::max(arr.begin(), arr.end() - 1);

    std::array<int, 5>::iterator min_it = std::min_element(arr.begin(), arr.end());
    std::array<int, 5>::iterator max_it = std::max_element(arr.begin(), arr.end());

    std::cout << "Max : " << *max_it << "  Min : " << *min_it << std::endl;

    arr = {12, 43, 90, 443, 18};
    auto min_max = std::minmax_element(arr.begin(), arr.end());
    std::cout << "Min : " << *min_max.first << "  Max : " << *min_max.second << std::endl;

    return;
}

void Test06() {

    std::array<int, 5> arr {45, 67, 18, 18, 54};

    std::array<int, 5>::iterator adjacent = std::adjacent_find(arr.begin(), arr.end());

    if (adjacent != arr.end()) {
        std::cout << "Found adjacent item : " << *adjacent << std::endl;
    } else {
        std::cout << "No adjacent item found : " << std::endl;
    }

    arr = {1, 4, 2, 6, 7};    
    adjacent = std::adjacent_find(arr.begin(), arr.end());

    if (adjacent != arr.end()) {
        std::cout << "Found adjacent item : " << *adjacent << std::endl;
    } else {
        std::cout << "No adjacent item found : " << std::endl;
    }

    return;
}

void Test07() {

    std::array<int, 5> arr {45, 67, 18, 18, 54};

    int sum = std::accumulate(arr.begin(), arr.end(), 0);

    std::cout << "Accumulate : " << sum << std::endl;

    arr = {1, 1, 1, 1, 1};
    sum = std::accumulate(arr.begin(), arr.end(), 10);
    std::cout << "Accumulate : " << sum << std::endl;

    return;
}

void Test08() {

    std::array<int, 10> arr {45, 67, 18, 18, 54, 34, 43, 54, 11, 11};

    int count = 0;
    count = std::count(arr.begin(), arr.end(), 34);
    std::cout << "Found 34 " << count << std::endl;

    arr = {1, 1, 1, 1, 1};
    count = std::count(arr.begin(), arr.end(), 1);
    std::cout << "Found 1 " << count << std::endl;

    arr = {1, 1, 1, 1, 1};
    count = std::count(arr.begin(), arr.end(), 10);
    std::cout << "Found 1 " << count << std::endl;

    return;
}

void Test09() {

    std::array<int, 10> arr {45, 67, 18, 18, 54, 34, 43, 54, 11, 11};

    int count = 0;
    count = std::count_if(arr.begin(), arr.end(), [](int x) {return x % 5 == 0;});
    std::cout << "Test 1 " << count << std::endl;

    arr = {1, 1, 1, 1, 1};
    count = std::count_if(arr.begin(), arr.end(), [](int x) {return x > 5;});
    std::cout << "Test 2 " << count << std::endl;

    arr = {1, 11, 11, 1, 1};
    count = std::count_if(arr.begin(), arr.end(), [](int x) {return x > 10;});
    std::cout << "Test 3 " << count << std::endl;
    
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

    Test09();

    return 0;
}