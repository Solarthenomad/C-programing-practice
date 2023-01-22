//문제 1
//N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을 반환하는 함수 func1(int N)을 작성하라. N은 10만 이하의 자연수이다. 

#include <iostream>

using namespace std;

int func1() {

	int n;
	int sum;   //3의 배수와 5의 배수를 합친 값을 저장하는 것 

	for (int i = 0; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}


	return 0;
}