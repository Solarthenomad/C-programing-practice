// 128���� ���� hi�� ����ϴ� �Լ�

#include <iostream>

using namespace std;

void func1() {
	for (char s = 0; s > 128; s++) {
		cout << "hi"<<endl;
	}
}

//10�� 10 �ŵ������� 1000000007�� ���� �������� ��ȯ�ϴ� �Լ� 
int func3() {
	int a = 10;
	int mod = 10000007;
	for (int i = 0; i < 10; i++) {
		a = 10 * a % mod;
		return a;
	}
}

//50!�� 61�� ���� �������� ��ȯ�ϴ� �Լ� 
int func2() {
	int r = 1;
	for (int i = 1; i <= 50; i++) {
		r = r * i % 61;
	}
	return r;
}

//float : 4byte
//double : 8byte 

//double�� long lpong ������ ������ �Ժη� ������ �ȵȴ�. 
//�Ǽ��� �ٱ��� ���� ��ȣ�� ����ؼ��� �ȵȴ�. 



