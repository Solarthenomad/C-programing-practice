#include <bits/stdc++.h>
using namespace std;

int main(void) {
    list<int> L = { 1,2 }; // 1 2
    list<int>::iterator t = L.begin(); // t는 1을 가리키는 중
    L.push_front(10); // 10 1 2
    cout << *t << '\n'; // t가 가리키는 값 = 1을 출력
    L.push_back(5); // 10 1 2 5
    L.insert(t, 6); // t가 가리키는 곳 앞에 6을 삽입, 10 6 1 2 5
    t++; // t를 1칸 앞으로 전진, 현재 t가 가리키는 값은 2
    t = L.erase(t); // t가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환
    // 10 6 1 5, t가 가리키는 값은 5
    cout << *t << '\n'; // 5
    for (auto i : L) cout << i << ' ';
    cout << '\n';
    for (list<int>::iterator it = L.begin(); it != L.end(); it++)
        cout << *it << ' ';

}

//손코딩 문제 1
//원형 연결 리스트 내의 임의의 노드 하나가 주어졌을 때 해당 list 길이를 효율적으로 구하는 방법은?
//동일한 노드가 나올 때까지 계속 다음 노드로 가면 된다. 
//공간복잡도 O(1) 시간 복잡도 O(N)

//손코딩 문제 2 
//중간에 만나는 두 연결 리스트의 시작점들이 주어졌을 때 만나는 지점을 구하시오 
//Floyd 사이클 파인딩 알고리즘 
//공간 복잡도 O(1) 시간 복잡도 O(N)


