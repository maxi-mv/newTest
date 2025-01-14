#include <iostream>
#include <unordered_map>

int main () {
    std::string name;
    std::string phonenumber;

    std::unordered_map<std::string, std::string>phoneMap;

    std::cout << "Enter name: " << std::endl;
    std::cin >> name;

    std::cout << "Enter phonenumber: " << std::endl;
    std::cin >> phonenumber;

    phoneMap[name] = phonenumber;

    std::cout << "----------------" << std::endl;
    std::cout << name << std::endl;
    std::cout << phoneMap[name];
}