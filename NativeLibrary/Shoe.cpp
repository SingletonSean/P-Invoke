#include <string>
#include <iostream>
#include <comdef.h>

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

extern "C" __declspec(dllexport) Shoe CreateShoe(double shoeSize) {
    Shoe newShoe = Shoe();

    newShoe.id = 2;
    newShoe.size = shoeSize;
    newShoe.brand = SysAllocString(L"Adidas");
    newShoe.color = SysAllocString(L"Blue");

    return newShoe;
}

extern "C" __declspec(dllexport) void BuyShoe(Shoe shoe) {
    shoe.buy();
}