int n, m;
int a[1000], b[1000], c[2000];

void read() {
	int i;
	scanf("%d%d", &n, &m);
	for(i = 0; i < n; ++ i)
		scanf("%d", a + i);
	for(i = 0; i < m; ++ i)
		scanf("%d", b + i);
}

int cmp(const void * a, const void * b) {
	return *((int *)a) - *((int *)b);
}

void sort() {
	qsort(a, n, sizeof(int), cmp);
	qsort(b, m, sizeof(int), cmp);
}

void merge() {
	int i;
	for(i = 0; i < n; ++ i)
		c[i] = a[i];
	for(i = 0; i < m; ++ i)
		c[n + i] = b[i];
}

void output() {
	int i;
printf("%d",c[0]);
	for(i = 1; i < n + m; ++ i)
		printf(" %d", c[i]);
}

int main () {
	read();
	sort();
	merge();
	output();
	return 0;
}
