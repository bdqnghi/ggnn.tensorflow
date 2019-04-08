void main()
{
	char n[10000],m[10000];
	int a[30]={0},b[30]={0},c[30]={0},d[30]={0};
	int i,j,w,q,z=0;
	scanf ("%s %s",n,m);
	w=strlen(n);
	q=strlen(m);
	if (w==q)
	{for (i=0;i<26;i++)
	{
		for (j=0;j<w;j++)
		{
			if (n[j]==65+i)
				a[i]=a[i]+1;
			if (n[j]==97+i)
				b[i]=b[i]+1;
			if (m[j]==65+i)
				c[i]=c[i]+1;
			if (m[j]==97+i)
				d[i]=d[i]+1;
		}
	}
	for (i=0;i<26;i++)
	{
		if (a[i]==c[i]&&b[i]==d[i])
			z=1;
		else 
		{
			printf("NO\n");
			z=0;
			break;
		}
	}
	if (z==1)
		printf("YES\n");
	}
	if (w!=q)
		printf("NO\n");
}