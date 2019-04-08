
int fei(int n) {
	if(n == 1) return 1;
	if(n == 2) return 2;
	if(n > 2) {
		int a = fei(n - 1) + fei(n - 2);
		return a;
	}
}

int main() {
	int m;
	cin >> m;
	for(int k = 0; k < m; k++) {
	int n;
	cin >> n;
	int a = 1; /* to calculate the numerator */
	int b = 1;    /* to calculate the denominator */
	double t;  /* to calculate the item of the formula */
	double sum = 0;
	for(int i = 1; i <= n; i++) {
		a = fei(i + 1);
		b = fei(i);
		t = (double)(a) / (double)(b);
		sum += t;
	}
	printf("%.3lf\n", sum);
	}
	return 0;
}