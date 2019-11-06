#pragma once

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

	void addFront(int x) {
		SNode *tmp = head;
		head = new SNode;
		head->next = tmp;
		head->elem = x;
	}

	SNode* insertAtRecurse(SNode *ptr, SNode *prev, int i, int j, int x) {
		if (i >= j) {
			SNode *insert = new SNode;
			prev = insert;
			insert = ptr;
			insert->elem = x;
			return nullptr;
		}
		else {
			SNode *prev = ptr;
			i++;
			return insertAtRecurse(ptr->next, prev, i, j, x);
		}
	}
	SNode *head;
};

