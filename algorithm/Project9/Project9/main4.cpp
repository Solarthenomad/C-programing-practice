/*
�־��� ���� N�� int �迭 arr���� ���� 100�� ���� �ٸ� ��ġ�� �� ���Ұ� �����ϸ�
1�� , �������� ������ 0�� ��ȯ�ϴ� �Լ� func2(int arr[], int N)�� �ۼ��϶�. arr�� �� ���� 0�̻� 100�����̰� N�� 1000�����̴�. 
*/

#include <bits/stdc.h++>

using namespace std;

//���� ���ʷ� �����鼭 ���ݺ��� �ִ� ���� ������ ���� ���� 100�̵Ǵ����� �˰� ���� �� 
int func2(int arr[], int N) {
	int occur[101] = {};
	for (int i = 0; i < N; i++) {
		if (occur[100 - arr[i]] == 1) {
			return 1;
		}
		occur[arr[i]] = 1;
	}
	return 0;
}