#include <iostream>
//include iostream은 전처리 지시자
/* c++에서 함수를 사용하고자 한다면 반드시 그 함수의 원형을 미리 정의해야 한다. */

using namespace std;
//';  : 종결자의 역할을 한다. 

int main() {
	//main이라는 이름을 가진 함수 

	cout << "Hello";
	//Hello라는 문자를 cout해줘 

	cout << "Hello, Worold" << endl;
	//endl : 줄바꿈함수 
	//<< : 데이터의 흐름 즉 데이터의 방향을 나타냄

	return 0;
}

