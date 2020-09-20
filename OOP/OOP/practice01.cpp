#include <iostream>
class SetValue {
private:
	int x, y;
public:
	void printValue(int x, int y);
};

void SetValue::printValue(int x, int y) {
	std::cout << "X = " << x << " ,Y = " << y << std::endl;
}

int main_practice01() {
	SetValue obj;
	obj.printValue(33, 44);
	
	system("pause");
	return 0;
}