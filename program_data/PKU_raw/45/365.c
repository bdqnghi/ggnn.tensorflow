
int main()
{
	char s[51], w[51];
	scanf("%s %s", w, s);
	printf("%d", strstr(s, w)-s);


	return 0;
}