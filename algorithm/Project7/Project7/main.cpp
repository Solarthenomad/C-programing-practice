/*
�迭�� ����
1. O(1)�� k��° ���Ҹ� Ȯ��/������ �����ϴ�. 
2. �������(�߰������� �Ҹ�Ǵ� �޸��� ��)�� ���� ����. 
3. �޸� ������ �پ� �ֱ� ������ cache hit rate�� ����. 
4. �޸� �� ������ ������ ��ƾ� �ؼ� �Ҵ翡 ������ �ɸ���. 
*/
// ������ ��ġ�� ���Ҹ� �߰��ϰų�(void insert) ������ ��ġ�� ���Ҹ� �����ϰų�(void erase)

#include <iosream>

using namespace std;

void insert(int idx, int num, int arr[], int& len); 
//idex, num ���� �ΰ� ����, �迭 �ϳ� ����(�츮�� �߰��ؾ� �� ����� �迭), ������ len
//idx��ġ�� num�� �ִ� �� 

void erase(int idx, int num, int arr[], int& len);
//���� ��ġ�� ���Ҹ� ������ �� �ִ� �Լ� 
int main(void) {
	int arr[10] = { 10, 50, 40, 30, 70, 20 };
	int len = 6;
	insert(3, 60, arr, len); //10 50 40 60 30 10 20
	erase(4, arr, len);   //10 50 40 60 70 20

}