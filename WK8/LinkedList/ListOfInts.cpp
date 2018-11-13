#include "ListOfInts.h"
#include <iostream>

ListOfInts::ListOfInts() : head(nullptr) {}

ListOfInts::~ListOfInts() {
    NodeOfInt* temp;
    while (head) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


void ListOfInts::insert(int in) {
    if(!head) {
        head = new NodeOfInt(in);
    } else {
        NodeOfInt* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = new NodeOfInt(in);
    }
}


void ListOfInts::display() {
    if(!head) return;
    NodeOfInt* temp = head;
    while (temp) {
        std::cout << temp->num << ' ';
        temp = temp->next;
    }
    std::cout << std::endl;
}

int ListOfInts::deleteMostRecent() {
	if(!head) return 0;
    NodeOfInt* temp = head;
    while((temp->next)->next) temp = temp->next;
    int x = (temp->next)->num;
    delete temp->next;
    temp->next = nullptr;
    return x;
}

int ListOfInts::deleteAt(int pos) {
	if(!head || pos < 0) return 0;
	NodeOfInt* curr = head;
	NodeOfInt* prev = head;
	for (int i = 0; i < pos; ++i) {
		if(!(curr->next) && pos != i) return 0;
		prev = curr;
		curr = curr->next;
	}
	int x = curr->num;
	if(curr == head) {
		head = head->next;
	} else {
		prev->next = curr->next;
	}
	delete curr;
	return x;
}