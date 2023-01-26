/*
주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면
1을 , 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라. arr의 각 수는 0이상 100이하이고 N은 1000이하이다. 
*/

#include <bits/stdc.h++>

using namespace std;

//수를 차례로 읽으면서 지금보고 있는 수와 이전의 수의 합이 100이되는지를 알고 싶은 것 
int func2(int arr[], int N) {
	int occur[101] = {};
	for (int i = 0; i < N; i++) {
		if (occur[100 - arr[i]] == 1) {
			return 1;
		}
		occur[arr[i]] = 1;
	}
	return 0;
}