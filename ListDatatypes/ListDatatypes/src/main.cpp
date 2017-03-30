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

	LinkedList<int> list;



	for (int i = 0; i < list.size(); i++) {
		std::cout << list.at(i) << std::endl;
	}

	system("pause");
	return 0;
}