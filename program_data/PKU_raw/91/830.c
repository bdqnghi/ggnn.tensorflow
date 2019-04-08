void main()
{
	char s[100005],*p,*q;
	int n;
	gets(s);
	n=strlen(s);
	for(p=s;p<s+n-1;p++)
		printf("%c",(*p+*(p+1)));
		printf("%c",(*s+*(s+n-1)));
}