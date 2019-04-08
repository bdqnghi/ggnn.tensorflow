int main() {
	char a[100], *p, *q, b[100];
	int lenth, i = 0, j,count[100] = {0};
	for (i = 0; i < 100; i++) {
		count[i] = 1;
	}
	i = 0;
	cin.getline(a, 100);
	lenth = strlen(a);
	for (p = a; p <= lenth + a; p++) {
		for (q = p + 1;*q == *p || fabs(*p - *q) == 32 ; q++) {
				b[i] = *p;
				count[i]++;
		}
		if (count[i] != 1) {
			p = q - 1;
			i++;
		} else {
			b[i]=*p;
			i++;
		}
	}
	for (j = 0; j < i; j++) {
		if (b[j] >= 'a' && b[j] <= 'z') {
			b[j] = b[j] - 32;
		}
	}
	for (j = 0; j < i-1; j++) {
		cout << "(" << b[j] << "," << count[j] << ")";
	}
	return 0;
}
