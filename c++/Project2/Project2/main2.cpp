#include <iostream>

using namespace std;

int main() {
	//char : 작은 문자형
	int a = 77;
	char b = a;
	char b = 'a';
	cout << b << endl;
	//77은 아스키코드로 M으로 반환이 되기 때문에 b = a를 넣게 되면 아스키코드로 인식하여 문자열을 반환한다. 
	return 0;

}