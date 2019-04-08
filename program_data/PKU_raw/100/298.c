void main()
{
	char a[500];
	int b[150]={0};
	int i,j,m,n;
	for (i=0;;i++)
	{
		a[i]=getchar();
		if (a[i]=='\n')
			break;
	}
	m=i-1;
	for (j=97;j<=122;j++)
	{
		n=0;
		for (i=0;i<=m;i++)
		{
			if (a[i]==j)
				n=n+1;
		}
		b[j]=n;
	}
	n=0;
	for (i=97;i<=122;i++)
	{
		if (b[i]!=0)
		{
			printf("%c=%d\n",i,b[i]);
			n=1;
		}
	}
	if (n==0)
		printf("No\n");
}