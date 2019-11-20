#pragma once
#include <iostream>
using namespace std;

class SNode {
public:
	int elem;
	SNode *next;
};

class SLL {
public:
	SLL() {
		head = nullptr;
	}

	//Add to the front of a linked list.
	void addFront(int x) {
		SNode *tmp = head;
		head = new SNode;
		head->next = tmp;
		head->elem = x;
	}

	//Insert a node in a linked list recursively.
	SNode* insertAtRecurse(SNode* ptr, SNode* prev, int n, int elem) {
		if (n <= 1) {
			if (prev == nullptr) {
				addFront(elem);
				return nullptr;
			}

			SNode* insert = new SNode;
			insert->elem = elem;
			prev->next = insert;
			insert->next = ptr;
			return nullptr;
		}
		else {
			prev = ptr;
			ptr = ptr->next;
			n--;
			return insertAtRecurse(ptr, prev, n, elem);
		}	
	}

	//Print list.
	void print() {
		SNode* ptr = head;
		while (ptr != nullptr) {
			cout << ptr->elem << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}

	SNode *head;
};

