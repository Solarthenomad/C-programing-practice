//알파벳 개수 출력 문제 : BOJ 10808번 

#include <bits/stdc++.h>
using namespace std;

int freq(26);    //알파벳이 나오는 횟수가 나오는 걸 저장하는 애 
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	for (auto c : s) {
		freq[c - 'a']++;

	}
	for (int i = 0; i < 26; i++)[
		cout << frequ[i] << '';
	

}