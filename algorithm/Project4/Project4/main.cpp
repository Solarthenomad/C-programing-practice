#include <iostream>

using namespace std;

//���� 4
//N������ �� �߿��� ���� ū 2�� �ŵ��������� ��ȯ�ϴ� �Լ� func4(int N)�� �ۼ��϶�. N�� 10�������� �ڿ����̴�. 

int func4(int N) {

	int val = 1;
	while (2 * val <= N) {
		val *= 2;
		return val;
	}
}