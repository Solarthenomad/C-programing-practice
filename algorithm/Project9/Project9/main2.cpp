#include <bits/stdc.++h>

using namespace std;

//���ĺ� ���� ��� ���� : BOJ 10808�� 

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;

	for (char a = 'a'; a <= 'z'; a++) {
		int cnt = 0;
		for (auto c : s) {
			if (a == c) {
				cnt++;

			}
			cout << cnt << '';
		}


	}

}

