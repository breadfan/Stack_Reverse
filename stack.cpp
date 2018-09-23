#include <iostream>

struct node_t {
	node_t() {
		prev = nullptr;
	}
	int value;
	node_t* prev;
};


class stack {
private:
	node_t * top_;
	bool is_empty();
public:
	stack() {
		top_ = nullptr;
	};
	~stack() {
		//TODO
	};
	void reverse();
	void push(int);
	int* pop();
};


void stack::push(int value) {
	node_t* tmp = new node_t();
	tmp->value = value;
	tmp->prev = top_;
	top_ = tmp;
}

int* stack::pop() {
	if (!is_empty()) {
		int* tmp_val = new int(top_->value);
		node_t* tmp_top = top_;
		top_ = top_->prev;
		delete tmp_top;
		return tmp_val;
	}
	return nullptr;
}

bool stack::is_empty() {
	return top_ == nullptr;
}

void stack::reverse() {
	node_t* ptr;
	while () {
		do {
			ptr = top_->prev;
			top_->value = ptr->value;
			ptr = nullptr;
		} while (ptr->prev != nullptr);

	}
}

int main() {
	// int val;
	stack my_stack;

	for (int i = 0; i < 10; ++i) {
		my_stack.push(i);
	}

	for (int i = 0; i < 10; ++i) {
		std::cout << my_stack.pop();
	}

	return 0;
}


// API
// Application Programming Interface