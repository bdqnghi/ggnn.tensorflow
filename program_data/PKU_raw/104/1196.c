int main() {
	int x, a[2][10], i, j, k, len[2], f;
	x = i = j = k = f = 0;
	memset(a, 0, sizeof(a));
	memset(len, 0, sizeof(len));
	for (j=0; j<2; j++) {
		scanf("%d", &x);
		i=0;
		do {
			a[j][i] = x;
			if (x % 2 == 1)
				x--;
			x /= 2;
			i++;
		} while (x != 1 && x != 0);
		a[j][i] = 1;
		len[j] = i;
		/*
		for (; i>=0; i--)
			printf("%d ", a[j][i]);
		printf("\n");
		*/
	}
	if (a[0][0] == a[1][0]) {
		printf("%d", a[0][0]);
		f = 1;
	}
	else {
		for (i=len[0], j=len[1]; i>=0 && j>=0; i--, j--) {
			if (a[0][i] != a[1][j]) {
				printf("%d", a[0][i+1]);
				f = 1;
				break;
			}
			if (i == 0) {
				printf("%d", a[0][0]);
				break;
			}
			if (j == 0) {
				printf("%d", a[1][0]);
				break;
			}
		}
	}
	//getchar();getchar();
	return 0;
}
