//���� ����Ʈ 
//���ҵ��� ������ �� �� ���� ���ҵ��� �����ϴ� ������� �����ϴ� �ڷ� ���� 


//1. k��° ���Ҹ� Ȯ���ϰų� �����ϱ� ���ؼ� O(k)�� �ʿ��ϴ�.
//2. ������ ��ġ�� ���Ҹ� �߰��ϰų� ������ ��ġ�� ���� ���Ŵ� O(1)�̴�. 


// ������ ��ġ�� �ִ� ���Ҹ� Ȯ���ϰų� �����ϱ� = O(N)
// ������ ��ġ�� ���Ҹ� �߰��ϰų� ������ ��ġ�� ���Ҹ� �����ϴ� �� = O(1)


//���Ḯ��Ʈ�� ���� 
/*
struct NODE {
    struct NODE *prev, *next;
    int data;
};
*/

//�߸� ���� ����Ʈ : ������ ��� pre�� enxt�� �ε����� �����ϴ� ������� ������ ��
/*
const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];  //dat�� i��° ������ ��, pre�� i��° �̹��� ������ �ε���, nxt�� ���� ������ �ε���
int unused = 1; //pre�� ���Ұ��� -1�̸� ���� ���� ������� // nxt���Ұ��� -1�̸� ���� ���� �������� ���� 


fill(pre, pre+MX, -1);
fill(nxt, nxt+MX, -1);
*/

//traverse �Լ� : ���Ḯ��Ʈ�� ��� �͵��� ������� 
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
    1. ���ο� ���Ҹ� ������
    2. �� ������ pre ���� ������ ��ġ�� �ּҸ� �����Ѵ�. 
    3. �� ������ nxt ���� ������ ��ġ�� nxt ���� �����Ѵ�. 
    4. ������ ��ġ�� nxt���� ������ ��ġ�� ���� ������ pre ���� �� ���ҷ� ����
    5. unused 1 ���� 
    */
    dat[unused] = num;   //���ο� ���Ҹ� ������
    pre[unused] = addr;   //������ ��ġ�� �ּ� ����
    nxt[unused] = nxt[addr];   //�� ������ nxt ���� ������ ��ġ�� nxt ���� �����Ѵ�. 
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
    /*
    1. ������ ��ġ�� nxt�� ������ ��ġ�� nxt�� �����Ѵ�. 
    2. ���� ��ġ�� pre�� ������ ��ġ�� pre�� �����Ѵ�. 

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
