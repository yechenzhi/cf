#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
const int MAX = 200010;
int n, k, a[MAX];
string s;

int main() {
	scanf("%d%d", &n, &k);
	cin >> s;

	if (k == 0) cout << s;

	else {
		if (n == 1) {
			cout << 0;
			return 0;
		}
		if (s[0] != '1') {
			s[0] = '1';
			k--;
		}
		for (int i = 1; i < s.length()&&i<k+1; i++) {
			if (s[i] != '0') s[i] = '0';
			else k++;
		}
		cout << s;
	}
	return 0;
}

//system("pause");
//return 0;
//考虑中间有0无需处理的情况。