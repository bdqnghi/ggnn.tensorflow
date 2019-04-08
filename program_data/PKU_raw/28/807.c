void main()
{
	char a[3600];
	gets(a);
	char *p;
	int len,n;
    len=strlen(a);
	n=0;
	for(p=a;p<=a+len;p++)
	{
		if(*p!=' ')
		{ 
			n=n+1;
		}
		else if(*p==' '&&n!=0)
		{
			printf("%d,",n);
			n=0;
		}
	}
	printf("%d",n-1);
}