#include <string>
#include "queue.h"

using namespace std;

void Queue::push(const string & str) {
	head->str = str;
	Node * temp = head;
	head = new Node();
	head->prev = tail;
	size++;
}

string Queue::pop() {
	Node * temp = tail;
	tail = tail->prev;
	delete temp;
	size--;
	return tail->str;
}

void Queue::clear() {
	while (size != 0) {
		size--;
		Node * temp = tail;
		tail = tail->prev;
		delete temp;
	}
}