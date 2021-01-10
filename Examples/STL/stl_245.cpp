#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <list>


void Test01() {

    std::vector<int> vector_1 {10, 20, 30, 40, 50};
    vector_1.push_back(60);
    vector_1.push_back(70);

    std::vector<int>::iterator it = vector_1.begin();

    std::cout << *it << std::endl;      // 10
    it++;
    std::cout << *it << std::endl;      // 20
    it = it+2;
    std::cout << *it << std::endl;      // 40
    it++;
    std::cout << *it << std::endl;      // 50
    it = vector_1.end() - 1;
    std::cout << *it << std::endl;      // 70

    return;
}

void Test02() {

    std::vector<int> vector_1 {1, 10, 100, 1000, 10000};

    auto it_1 = vector_1.begin();

    while (it_1 != vector_1.end()) {
        std::cout << *it_1 << std::endl;
        it_1++;
    }

    auto it_2 = vector_1.end() - 1;
    do {
        std::cout << *it_2 << std::endl;
        it_2--;
    } while(it_2 != vector_1.begin());

    std::vector<int>::iterator it_3 = vector_1.begin();
    while (it_3 != vector_1.end()) {
        *it_3 = 999;
        it_3++;
    }

    for (auto it = vector_1.begin(); it != vector_1.end(); it++) {
        std::cout << *it << std::endl;
    }

    return;
}


void Test03() {

    std::vector<int> vector_1 {11, 22, 33, 44, 55};

    std::vector<int>::const_iterator cit1 = vector_1.begin();

    while(cit1 != vector_1.end()) {
        // *cit1 = 100; --- This creates compiler error - error: assignment of read-only location
        std::cout << *cit1 << "\t";
        cit1++;
    }
    std::cout << std::endl;

    auto cit2 = vector_1.cbegin();
    while(cit2 != vector_1.cend()) {
        // *cit2 = 100; --- This creates compiler error - error: assignment of read-only location
        std::cout << *cit2 << "\t";
        cit2++;
    }
    std::cout << std::endl;

    return;
}

void Test04() {

    std::list<std::string> names {"Chong", "Mong", "Tong", "Pong"};

    std::list<std::string>::iterator it;
    it = names.begin();

    std::cout << *it << std::endl;
    it ++;
    std::cout << *it << std::endl;
    it++;
    std::cout << *it << std::endl; 


    std::set<int> int_set {1, 2, 4, 6, 10, 16};
    auto sit = int_set.cbegin();
    std::cout << *sit << std::endl;
    // sit = sit + 2;      // no match for ‘operator+’
    sit++;
    std::cout << *sit << std::endl;
    sit++;
    std::cout << *sit << std::endl;

    auto rsit = int_set.crbegin();
    while (rsit != int_set.crend()) {
        std::cout << *rsit << "\t";
        rsit++;
    }
    std::cout << std::endl;


    std::map<std::string, int> dict {
        {"KK", 100},
        {"PK", 50},
        {"DK", 65},
        {"MK", 05}
    };

    std::map<std::string, int>::iterator mit = dict.begin();

    while (mit != dict.end()) {
        std::cout << mit->first << "  " << mit->second << std::endl;
        mit++;
    }

    return;
}


void Test05() {

    std::vector<int> test_vector {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};

    std::vector<int>::iterator start_it = test_vector.begin() + 2;
    std::vector<int>::iterator finishit = test_vector.end() - 4;

    for (auto i = start_it; i < finishit; i++) {
        std::cout << *i << std::endl;
    }

    return;
}


int main() {

    Test01();

    Test02();

    Test03();

    Test04();

    Test05();

    return 0;
}