#include<iostream>
int a = 100;
namespace N {
	int a = 200;
	void m() {
		int a = 300;
		std::cout << a << std::endl;
		std::cout << N::a << std::endl;
		std::cout << ::a << std::endl;
	}
}
int main() {

	N::m();
	system("pause");
	return 0;
}