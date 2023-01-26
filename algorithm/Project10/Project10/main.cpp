//연결 리스트 
//원소들을 저장할 때 그 다음 원소들을 포함하는 방식으로 저장하는 자료 구조 


//1. k번째 원소를 확인하거나 변경하기 위해서 O(k)가 필요하다.
//2. 임의의 위치에 원소를 추가하거나 임의의 위치의 워소 제거는 O(1)이다. 


// 임의의 위치에 있는 원소를 확인하거나 변경하기 = O(N)
// 임의의 위치에 원소를 추가하거나 임의의 위치의 원소를 제거하는 것 = O(1)


//연결리스트의 구현 
/*
struct NODE {
    struct NODE *prev, *next;
    int data;
};
*/

//야매 연결 리스트 : 포인터 대신 pre와 enxt가 인덱스를 저장하는 방식으로 구현한 것
/*
const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];  //dat는 i번째 원소의 값, pre는 i번째 이번의 원소의 인덱스, nxt는 다음 원소의 인덱스
int unused = 1; //pre의 원소값이 -1이면 이전 원소 존재안함 // nxt원소값이 -1이면 다음 원소 존재하지 않음 


fill(pre, pre+MX, -1);
fill(nxt, nxt+MX, -1);
*/

//traverse 함수 : 연결리스트의 모든 것들을 출력해줌 
/*
void traverse() {
   int cur = nxt[0];
   while(cur !=-1){
       cout << dat[cur] << '';
       cur = nxt[cur];

   
   }
   cout << "\n\n";
}*/

#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX];
int nxt[MX];
int unused = 1;

void insert(int addr, char num) {
    /*
    1. 새로운 원소를 생성함
    2. 새 원소의 pre 값에 삽입할 위치의 주소를 대입한다. 
    3. 새 원소의 nxt 값에 삽입할 위치의 nxt 값을 대입한다. 
    4. 삽입할 위치의 nxt값과 삽입할 위치의 다음 원소의 pre 값을 새 원소로 변경
    5. unused 1 증가 
    */
    dat[unused] = num;   //새로운 원소를 생성함
    pre[unused] = addr;   //삽입할 위치의 주소 대입
    nxt[unused] = nxt[addr];   //새 원소의 nxt 값에 삽입할 위치의 nxt 값을 대입한다. 
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
    /*
    1. 이전의 위치의 nxt를 삭제할 위치의 nxt로 변경한다. 
    2. 다음 위치의 pre를 삭제할 위치의 pre로 변경한다. 

    */
}

void traversal() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur];
        cur = nxt[cur];
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    string init;
    cin >> init;
    int cursor = 0;
    for (auto c : init) {
        insert(cursor, c);
        cursor++;
    }
    int q;
    cin >> q;
    while (q--) {
        char op;
        cin >> op;
        if (op == 'P') {
            char add;
            cin >> add;
            insert(cursor, add);
            cursor = nxt[cursor];
        }
        else if (op == 'L') {
            if (pre[cursor] != -1) cursor = pre[cursor];
        }
        else if (op == 'D') {
            if (nxt[cursor] != -1) cursor = nxt[cursor];
        }
        else { // 'B'
            if (pre[cursor] != -1) {
                erase(cursor);
                cursor = pre[cursor];
            }
        }
    }
    traversal();
}
