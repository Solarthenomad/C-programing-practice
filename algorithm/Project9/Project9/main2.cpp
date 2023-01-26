#include <bits/stdc.++h>

using namespace std;

//알파벳 개수 출력 문제 : BOJ 10808번 

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

