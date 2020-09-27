#include<iostream>

void swap(int& first, int& second) {
	int temp = first;
	first = second;
	second = temp;
}
int main_homework4_2() {
	int a = 2, b = 3;
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	return 0;
}