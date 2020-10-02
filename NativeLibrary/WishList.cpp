#include "WishList.h"

#include <iostream>

std::string WishList::getName() {
	return _name;
}

void WishList::setName(std::string name) {
	_name = name;
}

void WishList::addItem(std::string item) {
	_items.push_back(item);
}

void WishList::removeItem(std::string item) {
	for (int i = 0; i < _items.size(); ++i) {
		if (_items[i] == item) {
			_items.erase(_items.begin() + i);
		}
	}
}

int WishList::countItems() {
	return _items.size();
}

void WishList::print() {
	for (std::string item : _items) {
		std::cout << item << std::endl;
	}
}