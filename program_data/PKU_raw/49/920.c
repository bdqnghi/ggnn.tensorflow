void srev(char str[500], int len)
{
	char rev[500];
	int i;
	for (i=0; i<len; i++)
		*(rev+i)=*(str+len-i-1);
	for (i=0; i<len; i++)
		*(str+i)=*(rev+i);
}
int main ()
{
	char s[500], str[500], rev[500];
	gets(s);
	int len=strlen(s), i, j;
	for (i=2; i<len; i++) {
		for (j=0; j<len-i+1; j++) {
			strncpy(str, s+j, i);
			strncpy(rev, s+j, i);
			str[i]=rev[i]='\0';
			srev(rev, i);
			if (strcmp(str, rev)==0) {
				puts(str);
			}
		}
	}
	return 0;
}