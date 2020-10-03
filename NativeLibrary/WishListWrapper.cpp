#include "WishList.h"
#include <comdef.h>
#include <comutil.h>

extern "C" __declspec(dllexport) WishList* CreateWishList(const char* name) {
	return new WishList(name);
}

extern "C" __declspec(dllexport) void DeleteWishList(WishList* wishList) {
	delete wishList;
}

extern "C" __declspec(dllexport) BSTR GetWishListName(WishList* wishList) {
	return _com_util::ConvertStringToBSTR(wishList->getName().c_str());
}

extern "C" __declspec(dllexport) void SetWishListName(WishList* wishList, const char* name) {
	wishList->setName(name);
}

extern "C" __declspec(dllexport) void AddWishListItem(WishList* wishList, const char* name) {
	wishList->addItem(name);
}

extern "C" __declspec(dllexport) void RemoveWishListItem(WishList* wishList, const char* name) {
	wishList->removeItem(name);
}

extern "C" __declspec(dllexport) int CountWishListItems(WishList* wishList) {
	return wishList->countItems();
}

extern "C" __declspec(dllexport) void PrintWishList(WishList* wishList) {
	wishList->print();
}