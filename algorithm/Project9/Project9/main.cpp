#include <bits/stdc++.h>

using namespace std;

int main() {

	vector<int> v1(3, 5);    //벡터로 여기서는 v1[] = {5,5,5};를 만들어주게 된다. 
	//STL벡터는 배열과 비슷한 기능을 하지만 배열과 다르게 크기를 자유자재로 늘이거나 줄이는 것이 가능하다. 
	cout << v1.size() << '\n';   //3 출력됨.
	v1.push_back(7); //{5,5,5,7}이 출력되게 된다. 

	vector<int> v2(2); // v2[] = {0,0};과 같다. 
	v2.insert(v2.begin() + 1, 3) //{0,3,0};출력 


	vector<int> v3 = { 1,2,3,4 };
	v1.erase(v3.begin() + 2) //{1,2,4}; 출력

	vector<int> v4; //{}공집합 배열이 만들어진다. 
	v4 = v3; //{1,2,4}
	cout << v4[0] << v4[1] << v4[2] << '\n';
	v4.pop_back(); //{1,2} 출력
	v4.clear();   //{} 출력

	vector<int> v1 = { 1,2,3,4,5,6 };

	//1. range-bsed for loop 

	for (int e : v1) {
		cout << e << '';

	}
		//2. not bad 

	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << '';
	}

	//3. Wrong  : 이렇게 쓰면 잘못 출력될 수 있음... size는 unsigned int이고 1은 int이기 때문에 overflow 생길수도 있음 
	for (int i = 0; i <= v1.size() - 1; i++) {
		cout << v1[i] << '';
	}
	





}