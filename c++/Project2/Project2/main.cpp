#include <iostream>

using namespace std;

int main() {

	//1. 변수란? 변할 수 있는 수 
	//2. 상수란? 변할 수 없는 수 

	/*
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수는 어디에 저장되는가(메모리 영역이 어디?)
	*/

	int a;  //a를 선언함
	a = 7;

	int b = 3;   //b값을 초기화 해주는 것 
	cout << "a="<<&a<<",b=" <<& b << endl;


	return 0;
}