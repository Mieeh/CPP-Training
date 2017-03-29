#include"LinkedList\LinkedList.h"
#include<iostream>

/* MACROS */
#define LOG(x) std::cout << x;

struct Rect {
	Rect(float a_width, float a_height) {
		width = a_width;
		height = a_height;
	}

	float width, height;
};

int main() {

	/*
	LinkedList<Rect*> list;

	Rect* rect = new Rect(10, 15);
	Rect* rect2 = new Rect(200, 200);
	Rect* rect3 = new Rect(800, 10);
	Rect* rect4 = new Rect(4, 4);

	list.push_back(rect);
	list.push_back(rect2);
	list.push_back(rect3);
	list.push_back(rect4);
	list.print_list();
	*/

	LinkedList<int> myList;
	int age = 12;
	for (int i = 4; i <= 10; i++) {
		myList.push_back(i);
	}
	myList.print_list();
	//std::cout << myList.at(2);

	/*
	list.push_back("1");
	list.push_back("2");
	list.push_back("3");

	std::cout << "List before pop back" << std::endl;
	list.print_list();

	std::cout << std::endl << "List after pop back and push back" << std::endl;
	list.pop_back();
	list.push_back("4");
	list.print_list();
	*/

	system("pause");
	return 0;
}