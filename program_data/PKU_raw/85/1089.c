int main()
{
	int panduan(char *s,int len);
	char shuru[30],*s;
	int i,n,len;
	gets(shuru);
	n=atoi(shuru);
	for(i=0;i<n;i++){
		gets(shuru);
		len=strlen(shuru);
		s=shuru;
		if(panduan(s,len))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
int panduan(char *s,int len)
{
	int i;
	for(i=0;i<len;i++){
		if(*s!='_'&&(*s<'a'||*s>'z')&&(*s<'A'||*s>'Z'))
			return 0;
		if(*(s+i)!='_'&&(*(s+i)<'a'||*(s+i)>'z')&&(*(s+i)<'A'||*(s+i)>'Z')&&(*(s+i)>'9'||*(s+i)<'0'))
			return 0;
	}
	return 1;
}