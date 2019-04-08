void main()
{
	char str[200];
	gets(str);
	char a;
	char *p,*q;
	p=&str[0];
	q=&str[1];
	a=*p;
	while (*q!='\0')
	{
		*p=*p+*q;
		p++;
		q++;
	}
	*p=*p+a;
	printf("%s\n",str);
}
