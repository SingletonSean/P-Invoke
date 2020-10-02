#pragma once

#include <string>
#include <vector>

class WishList {
	public:
		WishList(std::string name) : _name(name), _items() { }

		std::string getName();
		void setName(std::string name);
		int countItems();
		void addItem(std::string item);
		void removeItem(std::string item);

		void print();
	private:
		std::string _name;
		std::vector<std::string> _items;
};

