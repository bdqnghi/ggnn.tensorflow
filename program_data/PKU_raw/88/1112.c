int sz(char a)
{
	int m=0;
	if(('0'<=a)&&(a<='9'))
		m=1;
	return m;
}
int main()
{
	int i,n,k=0;
	char *p,a[30];
	gets(a);
	p=a;
	n=strlen(a);
	for(i=0;i<n;i++,p++)
	{
		if(sz(*p)==1)
		{
			printf("%c",*p);
			k=1;
		}
		else
		{
			if(k==1)
			{
				printf("\n");
				k=0;
			}
		}
	}
	return 0;
}