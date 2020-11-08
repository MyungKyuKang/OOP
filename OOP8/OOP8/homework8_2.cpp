#include<iostream>
using namespace std;

class Strategy {
public:
	Strategy() {}
	virtual int doOperation(int num1, int num2) = 0;
};

static Strategy* s = 0;

class Context {
public:
	Context(Strategy* strategy) {
		s = strategy;
	}
	static int executeStrategy(int num1, int num2) {
		return s->doOperation(num1, num2);
	}
};

class OperationAdd : public Strategy {
public:
	OperationAdd() : Strategy() {}
	int doOperation(int num1, int num2) {
		return num1 + num2;
	}
};

class OperationSubtract : public Strategy {
public:
	OperationSubtract() : Strategy() {}
	int doOperation(int num1, int num2) {
		return num1 - num2;
	}
};


class OperationMultiply : public Strategy {
public:
	OperationMultiply() : Strategy() {}
	int doOperation(int num1, int num2) {
		return num1 * num2;
	}
};

int main() {
	Context* context = new Context(new OperationAdd());
	cout << "10 + 5 = " << Context::executeStrategy(10, 5) << "\n";
	context = new Context(new OperationSubtract());
	cout << "10 - 5 = " << Context::executeStrategy(10, 5) << "\n";
	context = new Context(new OperationMultiply());
	cout << "10 + 5 = " << Context::executeStrategy(10, 5) << "\n";

	return 0;
}