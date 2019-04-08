
void toLowerCase(char *s) {
	while (*s) {
		if (isupper(*s))
			*s = 'a' + *s - 'A';
		s++;
	}
}
int main() {
	char s1[128];
	char s2[128];
	gets(s1);
	gets(s2);
	toLowerCase(s1);
	toLowerCase(s2);
	int res = strcmp(s1, s2);
	if (res < 0)
		printf("<");
	else if (res == 0)
		printf("=");
	else
		printf(">");
}
