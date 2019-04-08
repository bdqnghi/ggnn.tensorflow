

int fim[255], map[37]; char C[1000];

int main(void) {
	int a, b; char ch[100];
	for (int i = 0; i <= 36; i++) if (i <= 9) fim[i + 48] = i; else fim['a' + i - 10] = i; //??????
	for (int i = 0; i <= 36; i++) if (i <= 9) map[i] = i + 48; else map[i] = i + 'A' - 10; //??
	scanf("%d %s %d", &a, ch, &b);
	int S = 0;
	for (int i = 0; i < (int)strlen(ch); i++) {
		ch[i] = tolower(ch[i]);
		S = S * a + fim[ch[i]];
	} //??????
	if (S == 0) {
		puts("0");
	} else {
		int l = 0;
		while (S) 
			C[l++] = map[S % b], S /= b; //???b??
		reverse(C, C + l);
		puts(C);

	}
	return 0;
}
