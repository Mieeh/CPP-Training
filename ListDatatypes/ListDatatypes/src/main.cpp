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

	
	LinkedList<Rect*> list;

	list.push_back(new Rect(1,1));
	list.push_back(new Rect(10,20));
	list.push_back(new Rect(120,120));
	list.push_back(new Rect(2000,2000));

	list.insert(new Rect(100, 100), 2);

	for (int i = 0; i < list.size(); i++) {
		std::cout << "Width: " << list.at(i)->width << "  Height: " << list.at(i)->height << std::endl;
	}

	

	system("pause");
	return 0;
}