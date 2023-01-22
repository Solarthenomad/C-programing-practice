// 128번에 걸쳐 hi를 출력하는 함수

#include <iostream>

using namespace std;

void func1() {
	for (char s = 0; s > 128; s++) {
		cout << "hi"<<endl;
	}
}

//10의 10 거듭제곱을 1000000007로 나눈 나머지를 반환하는 함수 
int func3() {
	int a = 10;
	int mod = 10000007;
	for (int i = 0; i < 10; i++) {
		a = 10 * a % mod;
		return a;
	}
}

//50!을 61로 나눈 나머지를 반환하는 함수 
int func2() {
	int r = 1;
	for (int i = 1; i <= 50; i++) {
		r = r * i % 61;
	}
	return r;
}

//float : 4byte
//double : 8byte 

//double에 long lpong 범위의 정수르 함부로 담으면 안된다. 
//실수를 바교할 떄는 등호를 사용해서는 안된다. 



