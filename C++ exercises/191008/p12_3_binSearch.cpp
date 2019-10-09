// 연습문제 12.3 (제네릭 이진 탐색) - 강유경
#include <iostream>
#include <string>

template <typename T>
int binarySearch(const T list[], T key, int listSize);

int main()
{
	int ilist[] = { 2, 4, 7, 10, 11, 45, 50, 59, 60, 66, 69, 70, 79 };
	double dlist[] = { 2.5, 4.1, 7.5, 10.1, 11.1, 45.1, 50.5, 59, 60, 66, 69, 70, 79 };
	std::string slist[] = { "aa", "ab", "ac", "ba", "bb", "bc", "bd", "ca", "cb", "cc", "cd", "ce", "d" };

	int ikeyIdx = binarySearch(ilist, 11, (sizeof(ilist) / sizeof(*ilist)));
	int dkeyIdx = binarySearch(dlist, 7.5, (sizeof(dlist) / sizeof(*dlist)));
	int skeyIdx = binarySearch(slist, std::string("ca"), (sizeof(slist) / sizeof(*slist)));
	
	std::cout << "Search result in an int array: " << ikeyIdx << std::endl;
	std::cout << "Search result in a double array: " << dkeyIdx << std::endl;
	std::cout << "Search result in an string array: " << skeyIdx << std::endl;

	return 0;
}

template <typename T>
int binarySearch(const T list[], T key, int listSize)
{
	int low = 0;
	int high = listSize - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;
	}

	return -low - 1;
}
