// �������� 12.29 (��ƾ ����) - ������
#include <iostream>
#include <vector>

int main()
{
	int n;
	
	// 1. ���� n �Է�
	std::cout << "Enter number n: ";
	std::cin >> n;
	std::vector<std::vector<char>> rows(n, std::vector<char>(n));

	// 2. ���� ���� ��� �Է�
	std::cout << "Enter " << n << " rows of letters separated by spaces:\n";
	for (int i = 0; i < n; i++) {
		// ���� �Է�
		for (int j = 0; j < n; j++) {
			std::cin >> rows[i][j];

			// 2-1. ���ڴ� A�κ��� n�������� ����
			if (rows[i][j] < 'A' || rows[i][j] >= 'A' + n) {
				std::cout << "Wrong input: the letters must be from A to " << (char)('A' + n - 1) << std::endl;
				return 1;
			}
		}
	}

	// 3. �Է� �迭�� ��ƾ �������� Ȯ��
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// 3-1. row�� ���� ���ڰ� ������ ��ƾ ���� �ƴ� - ����
			for (int k = j + 1; k < n; k++) {
				if (rows[i][j] == rows[i][k]) {
					std::cout << "The input array is not a Latin square";
					return 0;
				}
			}
			// 3-2. col�� ���� ���ڰ� ������ ��ƾ ���� �ƴ� - ����
			for (int k = j + 1; k < n; k++) {
				if (rows[j][i] == rows[k][i]) {
					std::cout << "The input array is not a Latin square";
					return 0;
				}
			}
		}
	}

	return 0;
}