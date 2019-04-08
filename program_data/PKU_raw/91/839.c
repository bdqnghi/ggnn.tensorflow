int main()
{
	char str[101];
	char *p,t;
	int k;
	gets(str);
	k=strlen(str);
	t=*str;

	for (p=str;p<str+k-1;p++)
		*p=*p+*(p+1);
	*p=*p+t;

	puts(str);
	return 0;
}
