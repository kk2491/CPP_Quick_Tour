#include <iostream>
#include <iomanip>
#include <utility>
#include <string>
#include <vector>

template <typename T>
class Item {
    private:
    std::string name;
    T value;

    public:
    Item(std::string name, T value) : name {name}, value {value} {
        // std::cout << "constructor" << std::endl;
    }
    
    ~Item() {}
    
    std::string GetName() const {
        return name;
    }

    T GetValue() const {
        return value;
    }
};

template <typename T1, typename T2>
struct Pair {
    T1 first;
    T2 second;
};


int main() {

    std::cout << "=== Item class with int value ===" << std::endl;
    Item<int> item_1{"Grapes", 100};
    std::cout << "Item Name : " << item_1.GetName() << "  Value : " << item_1.GetValue() << std::endl;

    std::cout << "=== Item class with string value ===" << std::endl;
    Item<std::string> item_2{"Human", "NA"};
    std::cout << "Item Name : " << item_2.GetName() << "  Value : " << item_2.GetValue() << std::endl;

    std::cout << "=== Item class with double value ===" << std::endl;
    Item<double> item_3{"Banana", 11.11};
    std::cout << "Item Name : " << item_3.GetName() << "  Value : " << item_3.GetValue() << std::endl;

    std::cout << "=== Item class with Item ===" << std::endl;
    Item<Item<std::string>> item_4{"chess", {"Play", "Yes"}};
    std::cout << item_4.GetName() << "  " << item_4.GetValue().GetName() << "  " << item_4.GetValue().GetValue() << std::endl;

    std::cout << "=== Vector ===" << std::endl;
    std::vector<Item<double>> item_vector;
    Item<double> i1{"Tong", 11.11};
    item_vector.push_back(i1);
    Item<double> i2{"Ting", 22.11};
    item_vector.push_back(i2);
    Item<double> i3{"Bogra", 111.120};
    item_vector.push_back(i3);
    Item<double> i4{"Thomar", 21.23};
    item_vector.push_back(i4);

    for (const auto &i : item_vector) {
        std::cout << i.GetName() << "  " << i.GetValue() << std::endl;
    }

    std::cout << "=== Pair ===" << std::endl;
    Pair<std::string, double> pair_1{"Tibba", 420.420};
    std::cout << std::setw(10) << pair_1.first << std::setw(10) << pair_1.second << std::endl;

    Pair<std::string, int> pair_2{"Bonval", 22};
    std::cout << std::setw(10) << pair_2.first << std::setw(10) << pair_2.second << std::endl;

    Pair<int, double> pair_3{1, 100.100};
    std::cout << std::setw(10) << pair_3.first << std::setw(10) << pair_3.second << std::endl;

    return 0;
}