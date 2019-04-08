main()
{
	char a[11],b[4],c[15];
	int i,m,n;
	while(scanf("%s%s",a,b)!=EOF)
	{
		n=strlen(a);
		m=0;
		for (i=1;i<n;i++)
		{
			if (a[i]>a[m])
			{
				m=i;
			}
		}
		for(i=0;i<=m;i++)
		{
			c[i]=a[i];
		}
		c[m+1]=b[0];
		c[m+2]=b[1];
		c[m+3]=b[2];
		for (i=m+1;i<n;i++)
		{
			c[3+i]=a[i];
		}
		c[3+n]='\0';
		printf("%s\n",c);
	}
	return 0;
}