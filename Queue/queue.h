#pragma once

class Queue {
	class Node {
	public:
		std::string str;
		Node * prev;
	};
public:
	Queue() : head(new Node()), tail(new Node()), size(0) { head->prev = tail; }
	void push(const std::string &);
	std::string pop();
	unsigned getSize() const { return size; }
	void clear();
private:
	Node * head;
	Node * tail;
	unsigned size;
};