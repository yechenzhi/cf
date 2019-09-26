#include<cstdio>
#include<iostream>
using namespace std;

int a[10];

int main() {
	int n = 4, sum = 0;
	while (n--) {
		scanf("%d", &a[n]);
		sum += a[n];
	}
	bool flag = false;
	for (int i = 0; i < 4; i++) {
		if (a[i] == sum - a[i]) {
			flag = true;
			break;
		}
	}
	if (flag||a[0] + a[1] == a[2] + a[3] || a[0] + a[2] == a[1] + a[3] || a[0] + a[3] == a[1] + a[2])
		printf("YES\n");
	else printf("NO\n");

	system("pause");
}