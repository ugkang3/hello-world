// exercise 10.2 common chars - 강유경 
#include <iostream>
#include <string>

std::string commonChars(const std::string& s1, const std::string& s2);

int main()
{
	std::string s1;
	std::string s2;
	std::cout << "Enter a string s1: ";
	std::cin >> s1;
	std::cout << "Enter a string s2: ";
	std::cin >> s2;

	std::string s3(commonChars(s1, s2));
	if (s3.length()) {
		std::cout << "The common characters are " << s3;
	}
	else {
		std::cout << "No common characters";
	}

	return 0;
}

std::string commonChars(const std::string& s1, const std::string& s2) {
	std::string commChars; // 공통 문자 저장하는 string

	// s1[i]의 i를 증가시키면서 s1[i]가 s2 내에 있는지 검사한다.
	// commChars에 없고 s2에 있는 글자면 commChars에 추가한다.
	for (int i = 0; i < s1.length(); i++) {
		if (commChars.find(s1[i]) == std::string::npos) {
			if (s2.find(s1[i]) != std::string::npos) {
				commChars += s1[i];
			}
		}
	}

	return commChars;
}