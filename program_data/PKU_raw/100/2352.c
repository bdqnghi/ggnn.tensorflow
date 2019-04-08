void main()
{
	char s[300];
	char c;
	int i,n,asc,f=0;
	int a[123]={0};
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		asc=s[i];
		a[asc]++;
	}
	for(i=65;i<=90;i++)
	{
		if(a[i]>0)
		{
			c=i;
			printf("%c=%d\n",c,a[i]);
			f=1;
		}
	}
	for(i=97;i<=122;i++)
	{
		if(a[i]>0)
		{
			c=i;
			printf("%c=%d\n",c,a[i]);
			f=1;
		}
	}
	if(f==0)
		printf("No\n");
}