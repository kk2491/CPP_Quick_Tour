#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <set>

void Display(const std::map<std::string, std::set<int>> &mark) {

    std::cout << "[" << std::endl;
    for (const auto each_stud : mark) {
        std::cout << std::setw(10) << std::left << each_stud.first << ":";
        for (const auto each_sub : each_stud.second) {
            std::cout << each_sub << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "]" << std::endl;
    return;
}


template <typename T1, typename T2>
void Display(const std::map<T1, T2> &map_obj) {

    std::cout << "[";
    for (const auto each_item : map_obj) {
        std::cout << each_item.first << ":" << each_item.second << " ";
    }
    std::cout << "]" << std::endl;

    return;
}


void Test01() {

    std::map<std::string, int> e_map {
        {"Chong", 12},
        {"Acnd", 72},
        {"Bdaun", 52},
        {"Zamb", 22},
    };
    Display(e_map);

    e_map["Tomaar"] = 99; 
    Display(e_map);

    // e_map.at("sng") = 67; // terminate called after throwing an instance of 'std::out_of_range'

    e_map.at("Chong") = 99999;
    Display(e_map);

    e_map.insert(std::pair<std::string, int> {"Singa", 66});
    Display(e_map);

    e_map.insert(std::make_pair("Gonga", 88));
    Display(e_map);

    e_map.erase("Zamb");
    Display(e_map);
    auto it = e_map.begin();
    e_map.erase(it);
    Display(e_map);

    int count;
    count = e_map.count("Tomaar");
    std::cout << "Tomaar count : " << count << std::endl;
    count = e_map.count("Chaa");
    std::cout << "Chaa count : " << count << std::endl;

    auto it1 = e_map.find("Tomaar");
    if (it1 != e_map.end()) {
        std::cout << "Found" << std::endl; 
    } else {
        std::cout << "Not found" << std::endl;
    }

    return;
}

void Test02() {

    std::map<std::string, std::set<int>> mark {
        {"Chong", {1, 4, 5, 1, 3}},
        {"hong", {111, 4, 15, 41}},
        {"Cho", {145, 41, 500, 3}},
        {"Ng", {11, 15, 13}},
        {"Kogga", {1, 4, 5, 1, 3}},
    };
    Display(mark);

    mark["Soma"] = {9, 8, 11, 90, 11999};
    Display(mark);

    mark["Soma"].insert(99);
    Display(mark);

    auto it = mark.find("Chong");
    if (it != mark.end()) {
        std::cout << "Found and updating" << std::endl;
        it->second.insert(8811);
    } else {
        std::cout << "Not found" << std::endl;
    }
    Display(mark);

    return;
}

int main() {

    // Test01();

    Test02();

    return 0;
}