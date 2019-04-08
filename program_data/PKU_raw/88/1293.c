void sum(char *p)
{
	int a[10],i,j=0,b=0;
	for(i=0; *(p+i)!='\0'; i++)
	{
		if(*(p+i)>='0'&&*(p+i)<='9')
		{
			b=*(p+i)-48+b*10;
			if (*(p+i+1)<'0'||*(p+i+1)>'9')//||
			{
				a[j]=b;
				j++;
				b=0;
			}
		}
	}
	for(i=0; i<j; i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}

}
int  main()
{
	void sum(char *p);
	char s[50],*p=s;
	gets(s);
	sum(p);
		return 0;
}
