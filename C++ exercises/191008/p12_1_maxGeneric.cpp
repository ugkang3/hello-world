// 연습문제 12.1 (배열의 최댓값) - 강유경
#include <iostream>
#include <string>


template<typename T>
T getMax(T* list, int size);

int main()
{
	int ilist[] = { 301, 1, 45, 99, 87 };
	double dlist[] = { 5.5, 46.3, 5.2, 45.6, 18.9 };
	std::string list[] = { "hello", "hi", "bye", "his", "an" };
	
	int imax = getMax(ilist, (sizeof(ilist) / sizeof(*ilist)));
	double dmax = getMax(dlist, (sizeof(dlist) / sizeof(*dlist)));
	std::string max = getMax(list, (sizeof(list) / sizeof(*list)));

	std::cout << "Max value in integer array: " << imax << std::endl;
	std::cout << "Max value in double array: " << dmax << std::endl;
	std::cout << "Max value in string array: " << max << std::endl;

	return 0;
}

template<typename T>
T getMax(T* list, int size)
{
	T max = *list;
	for (int i = 1; i < size; i++) {
		if (*(list + i) > max) {
			max = *(list + i);
		}
	}
	return max;
}