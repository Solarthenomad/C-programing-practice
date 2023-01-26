/*
배열의 성질
1. O(1)의 k번째 원소를 확인/변경이 가능하다. 
2. 오버헤드(추가적으로 소모되는 메모리의 양)가 거의 없다. 
3. 메모리 상으로 붙어 있기 때문에 cache hit rate가 높다. 
4. 메모리 상에 연속한 구간을 잡아야 해서 할당에 제약이 걸린다. 
*/
// 임의의 위치에 원소를 추가하거나(void insert) 임의의 위치에 원소를 삭제하거나(void erase)

#include <iosream>

using namespace std;

void insert(int idx, int num, int arr[], int& len); 
//idex, num 변수 두개 선언, 배열 하나 선언(우리가 추가해야 할 대상인 배열), 참조자 len
//idx위치에 num을 넣는 것 

void erase(int idx, int num, int arr[], int& len);
//임의 위치의 원소를 삭제할 수 있는 함수 
int main(void) {
	int arr[10] = { 10, 50, 40, 30, 70, 20 };
	int len = 6;
	insert(3, 60, arr, len); //10 50 40 60 30 10 20
	erase(4, arr, len);   //10 50 40 60 70 20

}