
int a[300], b[300], c[300];
int al, bl;
char s[300];

int main() {
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	scanf("%s", s);
	al = strlen(s);
	int i, j = 0;
	for (i = al-1; i >= 0; i--, j++) {
		a[j] = s[i]-'0';
	}
	scanf("%s", s);
	bl = strlen(s);
	j = 0;
	for (i = bl-1; i >= 0; i--, j++) {
		b[j] = s[i]-'0';
	}
	if (bl > al) {
		al = bl;
	}
	/*
	for (i = al; i >= 0; i--)
		printf("%d", b[i]);
	printf("\n");
	*/
	int carry = 0;
	for (i = 0; i <= al+1; i++) {
		c[i] = a[i] + b[i] + carry;
		if (c[i] >= 10) {
			c[i] -= 10;
			carry = 1;
		}
		else
			carry = 0;
	}
	while (c[al] == 0 && al > 0) al --;
	for (i = al; i >= 0; i--)
		printf("%d", c[i]);
	puts("");
	return 0;
}
