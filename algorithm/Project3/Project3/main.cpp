//문제 3
//N이 제곱수이면 1을 반환하고 제곱수가 아니면 0을 반환하는 함수 func3(int N)을 작성하라. N은 10억이하의 자연수이다. 


#include <iostream>

using namespace std;

int func3(int N) {

	for (i = 1; i < * i<=N; i++) {
		if (i*i==N) {
			return 1;
		}
		else {
			return 0;
		}
	}


	return 0;
}



