// 연습문제 12.5 (값 교환) - 강유경
#include <iostream>
#include <string>

template<typename T>
void swap(T &pa, T &pb)
{
	T tmp = pa;
	pa = pb;
	pb = tmp;
}

int main()
{
	int a = 10, b = 20;
	double x = 5.5, y = 10.8;
	std::string s1 = "hello", s2 = "hi";

	std::cout << "\ta, b: " << a << ", " << b << std::endl;
	swap(a, b);
	std::cout << "Swapped a, b: " << a << ", " << b << "\n\n";

	std::cout << "\tx, y: " << x << ", " << y << std::endl;
	swap(x, y);
	std::cout << "Swapped x, y: " << x << ", " << y << "\n\n";

	std::cout << "\ts1, s2: " << s1 << ", " << s2 << std::endl;
	swap(s1, s2);
	std::cout << "Swapped s1, s2: " << s1 << ", " << s2 << "\n\n";

	return 0;
}