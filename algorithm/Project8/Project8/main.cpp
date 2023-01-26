#include <bits/stdc++.h>


using namespace std;

void insert(int idx, int num, int arr[], int& len) {

	//insert할 인덱스의 바로 오른쪽 옆의 인덱스들을 한칸씩 밀어야 인덱스 insert가 가능해진다...?
	//이렇게 되면 사라지는 값들 때문에(인덱스들을 한칸씩밀때마다 밀어져 온 자리의 인덱스의 값이 분실됨) -> 임시변수를 지정해줘야된다는 문제점
	//이렇게 하지말고 오른쪽 맨끝의 인덱스를 옆으로 밀어주면 자동으로 빈칸이 생성됨(값 삭제가 안됨)
	//왼쪽에서부터 코드를 땡겨옴 
	//arr[i] = arr[i - 1];
	for (int i = len; i > idx; i--) { //len은 인덱스 맨끝쪽 주소를 여기서 의미하고, 
		arr[i] = arr[i - 1];
		arr[idx] = num;
		len++
	}

}

void erase(int idx, int arr[], int& len) {
	//erase 해줄 위치의 바로 왼쪽부터 오르쪽 방향으로 자리를 없애주면 추가적인 메모리 삭제 없이 가능하다. 
	len--;
	for (int i = idx; i < len; i++) {
		arr[i] = arr[i + 1];
	}

}

//사용 팁 
//int a[21];
//int b[21][21];

//memset 함수 
/*
memset(a, 0, sizeof a);
memset(b, 0 , sizeof b);
*/
//memset함수는 비추천한다. 

//for 
/*
for(int i = 0; i <21 ; i++){
   a[i] = 0;
}
for(int i=0; i<21; i++) {
    for(int j=0; j<21; i++){
	    b[i][j] = 0; 
	}
    
}

//fill  : 가장 추천하는 방식 
/*
    fill
*/
*/

void printArr(int arr[], int& len) {
	for (int i = 0; i < len; i++) cout << arr[i] << ' ';
	cout << "\n\n";
}

void insert_test() {
	cout << "***** insert_test *****\n";
	int arr[10] = { 10, 20, 30 };
	int len = 3;
	insert(3, 40, arr, len); // 10 20 30 40
	printArr(arr, len);
	insert(1, 50, arr, len); // 10 50 20 30 40
	printArr(arr, len);
	insert(0, 15, arr, len); // 15 10 50 20 30 40
	printArr(arr, len);
}

void erase_test() {
	cout << "***** erase_test *****\n";
	int arr[10] = { 10, 50, 40, 30, 70, 20 };
	int len = 6;
	erase(4, arr, len); // 10 50 40 30 20
	printArr(arr, len);
	erase(1, arr, len); // 10 40 30 20
	printArr(arr, len);
	erase(3, arr, len); // 10 40 30
	printArr(arr, len);
}

int main(void) {
	insert_test();
	erase_test();
}