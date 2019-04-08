void main()
{
	char a[500]={'\0'},b[500][5]={'\0'};
	int i,j,m=0,n,k,x[300]={0},max=0;
	scanf("%d",&n);
	scanf("%s",&a);
	k=strlen(a);
	for(i=0;i<=k-n;i++)
	{
		for(j=i;j<i+n;j++)
			b[m][j-i]=a[j];
		m=m+1;
	}
	m=m-1;
	for(i=0;i<=m;i++)
	{
		for(j=i;j<=m;j++)
			if(strcmp(b[i],b[j])==0)
				x[i]=x[i]+1;
	}
	for(j=0;j<i;j++)
	{
		if(x[j]>=max)
			max=x[j];
	}
	if(max>1)
	{
	printf("%d\n",max);
	for(j=0;j<i;j++)
	{
		if(x[j]==max)
			printf("%s\n",b[j]);
	}
	}
	else
		printf("NO");
}
