int strcmp(char *a, char *b, int n) {
	int i=0;
	for (i=0; i<n; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}
int main() {
	char a[501], b[501];
	int n, i, j, k, x, y, l, f;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	scanf("%d", &n);
	scanf("%s", a);
	l = strlen(a)+1;
	f = 0;
	for (i=0; i+n<l; i++) {
		for (j=i+1; j+n<l; j++) {
			if (strcmp(&a[i], &a[j], n) == 1)
				b[i] ++;
		}
		if (b[i] > f)
			f = b[i];
	}
	if (f == 0)
		printf("NO");
	else {
		printf("%d\n", f+1);
		for (i=0; i<l; i++)
			if (b[i] == f) {
				for (j=0; j<n; j++)
					printf("%c", a[i+j]);
				printf("\n");
			}
	}
	//getchar();getchar();
	return 0;
}
