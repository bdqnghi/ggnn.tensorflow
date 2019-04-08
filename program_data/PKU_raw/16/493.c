int main(void)
{
	char s[20];
	int l, i;
	scanf("%s", s);
	l = strlen(s);
	for (i = l - 1; i >= 0; i--) printf("%c", s[i]);
	return 0;
}
