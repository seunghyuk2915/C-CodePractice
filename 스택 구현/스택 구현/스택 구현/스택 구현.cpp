﻿#include <iostream>
using namespace std;

class Stack {
private:
	int top, MaxSize;
	char* stack;
public:
	Stack(int size);
	bool isFull(), isEmpty();
	char pop();
	void push(char element);
	void print();
};

Stack::Stack(int size) {
	MaxSize = size;
	stack = new char[MaxSize];
	top = -1;
}

bool Stack::isFull() {
	if (top == MaxSize - 1) return 1;
	else return 0;
}

bool Stack::isEmpty() {
	if (top == -1) return 1;
	else return 0;
}

char Stack::pop() {
	if (isEmpty() == 1) cout << "Empty!\n";
	else return stack[top--];
}

void Stack::push(char element) {
	if (isFull() == 1) cout << "Full!\n";
	else stack[++top] = element;
}


void Stack::print() {
	for (int i = 0; i < top + 1; ++i)
		cout << stack[i] << endl;
}

int main() {

	Stack stack(5);
	stack.push('a');
	stack.pop();
	stack.push('b');
	stack.print();

	return 0;
}