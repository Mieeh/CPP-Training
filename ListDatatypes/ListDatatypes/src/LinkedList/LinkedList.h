#pragma once

#include<iostream>
#include<string>

/* MACROS */
#define LOG(x) std::cout << x;

/* Node class rep every value inside the linked list */
template<class T>
class Node {
public:
	Node(T a_data) {
		next = nullptr;
		value = a_data;
	}
public:
	T value;
	Node *next;
};


template<class T>
class LinkedList {
private:
	Node<T> *m_root;

public:
	/*
	* Default constructor, creates an empty LinkedList
	*/
	LinkedList() {
		m_root = nullptr;
	}

	/*
	* Goes through the list and prints all the values
	*/
	void print_list() {
		/*
		*Conductor is pointing to the nodes in the list
		*/
		Node<T> *conductor = m_root;

		if (m_root == nullptr) {
			LOG("List is empty");
			return;
		}

		// As long as the next linked node is not null then traverse to the next one
		while (conductor != nullptr) {
			std::cout << conductor->value << std::endl;
			conductor = conductor->next;
		}
	}

	/*
	* Appends the given element value to the end of the list
	*/
	void push_back(const T &a_data) {
		// This condition would run if the list is empty
		if (m_root == nullptr) {
			// The list is empty so: root = tail
			m_root = new Node<T>(a_data);
		}
		else {
			Node<T> *conductor = m_root;

			while (conductor != nullptr) {

				if (conductor->next == nullptr) {
					//std::cout << "added value " << a_value << " to the list" << std::endl;
					conductor->next = new Node<T>(a_data);
					return;
				}

				conductor = conductor->next;
			}
		}
	}

	/* Returns the data at i index */
	T* at(int a_index) {
		
		/* If the list is empty exit from the function */
		if (m_root == nullptr) {
			LOG("The list is empty, you can't search it! You idiot");
			//return;
		}

		int currentIndex = 0;
		Node<T> *conductor = m_root;

		/* Go through the list, looking for data at a_index */
		while (conductor != nullptr) {

			if (currentIndex == a_index) {
				//std::cout << "found data " << conductor->value << " at index " << currentIndex << std::endl;
				return conductor->value;
			}

			currentIndex++;
			conductor = conductor->next;
		}
	}

	/*
	* Pop the value at the last index of the list
	*/
	void pop_back() {
		Node<T> *conductor = m_root;

		if (conductor == nullptr) {
			LOG("You're trying to pop an empty list\n");
		}

		// Go through the list
		while (conductor != nullptr) {
			// Are we closing in at the tail? 
			if (conductor->next->next == nullptr)
			{
				// destroy the tail and set conductors next node to a null pointer
				conductor->next = nullptr;
				delete conductor->next;
				return;
			}
			conductor = conductor->next;
		}
	}
};