int main()
{
	char s[102] = { "\0" }, s1[102] = { "\0" };
	int i, l;
	gets(s);
	l = strlen(s);
	for (i = 0; i < l - 1; i++)
		s1[i] = s[i] + s[i + 1];
	s1[i] = s[i] + s[0];
	for (i = 0; i < l; i++)
		printf("%c", s1[i]);
	return 0;
}