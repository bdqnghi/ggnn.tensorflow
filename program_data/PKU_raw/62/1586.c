
int main() {
	char str[201];
	gets(str);
	int i, l = strlen(str);
	for (i = 0; i < l; i++) {
		if (!(i > 0 && *(str+i) == ' ' && *(str+i-1) == ' ')) {
			printf("%c", *(str+i));
		}
	}
	return 0;
}