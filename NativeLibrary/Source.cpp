#include <iostream>
#include <string>
#include <comdef.h>

extern "C" __declspec(dllexport) void HelloWorld();
extern "C" __declspec(dllexport) int Add(int, int);
extern "C" __declspec(dllexport) bool IsLengthGreaterThan5(const char*);
extern "C" __declspec(dllexport) BSTR GetName();

void HelloWorld()
{
	std::cout << "Hello world.";
}

int Add(int a, int b) {
	return a + b;
}

bool IsLengthGreaterThan5(const char* value) {
	return strlen(value) > 5;
}

BSTR GetName() {
	return SysAllocString(L"test");
}
