//// exercise 10.1 anagram - °­À¯°æ 
//#include <iostream>
//#include <string>
//
//bool isAnagram(const std::string& s1, const std::string& s2);
//
//int main()
//{
//	std::string s1;
//	std::string s2;
//	std::cout << "Enter a string s1: ";
//	std::cin >> s1;
//	std::cout << "Enter a string s2: ";
//	std::cin >> s2;
//
//	if (isAnagram(s1, s2)) {
//		std::cout << s1 << " and " << s2 << " are anagrams";
//	}
//	else {
//		std::cout << s1 << " and " << s2 << " are not anagrams";
//	}
//
//	return 0;
//}
//
//bool isAnagram(const std::string& s1, const std::string& s2) {
//	std::string t1(s1);
//	std::string t2(s2);
//
//	// if length of both string is same, iterate s1 from 0 to s1.length()
//	if (t1.length() == t2.length()) {
//		for (int i = 0; i < t1.length(); i++) {
//	
//			// if s1[i] is in s2, erase the letter in s2
//			if (t2.find(t1[i]) != std::string::npos) {
//				t2.erase(t2.find(t1[i]), 1);
//			}
//		}
//	}
//
//	// if s2 is empty, return true
//	return t2.empty();
//}