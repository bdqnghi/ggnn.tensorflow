int main()
{
	char s[5000],*p=s;
	int n=0;
	gets(s);
	while(*p)
	{
		if(*p==' ')
		{
			if(n!=0)
				printf("%d,",n);
			n=0;
		}
		else
			n++;
		p++;
	}
	printf("%d\n",n);
	return 0;
}