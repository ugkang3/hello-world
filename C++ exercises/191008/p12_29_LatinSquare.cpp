// 연습문제 12.29 (라틴 방진) - 강유경
#include <iostream>
#include <vector>

int main()
{
	int n;
	
	// 1. 숫자 n 입력
	std::cout << "Enter number n: ";
	std::cin >> n;
	std::vector<std::vector<char>> rows(n, std::vector<char>(n));

	// 2. 샘플 실행 결과 입력
	std::cout << "Enter " << n << " rows of letters separated by spaces:\n";
	for (int i = 0; i < n; i++) {
		// 한줄 입력
		for (int j = 0; j < n; j++) {
			std::cin >> rows[i][j];

			// 2-1. 문자는 A로부터 n개까지의 문자
			if (rows[i][j] < 'A' || rows[i][j] >= 'A' + n) {
				std::cout << "Wrong input: the letters must be from A to " << (char)('A' + n - 1) << std::endl;
				return 1;
			}
		}
	}

	// 3. 입력 배열이 라틴 방진인지 확인
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// 3-1. row에 같은 문자가 있으면 라틴 방진 아님 - 종료
			for (int k = j + 1; k < n; k++) {
				if (rows[i][j] == rows[i][k]) {
					std::cout << "The input array is not a Latin square";
					return 0;
				}
			}
			// 3-2. col에 같은 문자가 있으면 라틴 방진 아님 - 종료
			for (int k = j + 1; k < n; k++) {
				if (rows[j][i] == rows[k][i]) {
					std::cout << "The input array is not a Latin square";
					return 0;
				}
			}
		}
	}
	std::cout << "The input array is a Latin square";

	return 0;
}