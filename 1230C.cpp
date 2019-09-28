#include<cstdio>
#include<iostream>
using namespace std;
const int MAX = 520;
int n, m,sum;
int a[MAX][MAX];
int f[MAX][MAX];
bool flag = true;//能完成。

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			sum += a[i][j];
		}
		for (int k = m - 2; k > -1; k--) {
			if (a[i][k] == 0) {
				f[i][k] = 1;//代表这里可以改变。
				a[i][k] = a[i][k + 1] - 1;
				sum += a[i][k];
			}
			else if (a[i][k] >= a[i][k + 1]) {
				flag = false;
			}
		}
	}
	for (int j = 0 ; j < m; j++) {
		for (int i = n-2; i >-1; i--) {
			if (a[i][j] >= a[i+1][j] && f[i][j] != 1) {
				flag = false;
			}
			else if (a[i][j] >= a[i+1][j] && f[i][j] == 1) {
				int less = a[i][j] - a[i+1][j] + 1;
				a[i][j] = a[i+1][j] - 1;
				sum -= less;
			}
		}
	}
	//调试
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}*/

	if (flag) cout << sum;
	else cout << -1;
	//system("pause");
	return 0;
}
