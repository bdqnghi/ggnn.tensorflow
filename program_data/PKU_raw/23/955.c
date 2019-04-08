void main()
{
	char str1[100],*p,*q,*a;
	int n;
	gets(str1);
	n=strlen(str1);
    p=str1+n-1;
	q=str1+n-1;
	a=str1+n-1;
	for(p=str1+n-1;p>=str1;p--)
	{
		if(*p==' ')
		{a=p-1;
		for(p=p+1;p<=q;p++)
		printf("%c",*p);
		printf(" ");
		q=a;
		p=a;}
	}
	for(p=str1;p<=q;p++)
	printf("%c",*p);
}