void main()
{
	int i,j,n,k,l;
	char c[200][100],s[200][200];
	int a[200][100],b[200][200],d[200][200],x[200],y[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",c[i],s[i]);
		x[i]=strlen(c[i]);
		y[i]=strlen(s[i]);
	}
	for(i=0;i<n;i++)
	for(j=0;j<x[i];j++)
	{
		a[i][j]=c[i][j]-48;
		d[i][j]=a[i][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<y[i];j++)
		b[i][j]=s[i][j]-48;
	}
	for(i=0;i<n;i++)
	{
		k=x[i]-1;
		l=y[i]-1;
		for(j=k;j>=k-l;j--)
			d[i][j]=a[i][j]-b[i][l-k+j];
	}
	for(i=0;i<n;i++)
	for(j=x[i]-1;j>=0;j--)
	{
		if(d[i][j]<0)
		{
			d[i][j]=d[i][j]+10;
			d[i][j-1]=d[i][j-1]-1;
		}
		else continue;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<x[i];j++)
		printf("%d",d[i][j]);
		printf("\n");
	}
}