#include <string>
#include <iostream>

struct Shoe {
    int id;
    BSTR color;
    double size;
    BSTR brand;

    void buy() {
        std::cout << "Successfully purchased the ";
        std::wcout << color;
        std::wcout << " " << brand;
        std::cout << " shoe.";
    }
};