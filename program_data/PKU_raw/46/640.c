void main()
{
	int m,n,i,j,a[100][100],l=0,p,q;
	scanf("%d%d",&m,&n);
	p=m,q=n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	while(p>2&&q>2)
	{
		for(j=l;j<n-l;j++)
			printf("%d\n",a[l][j]);
		for(i=l+1;i<m-l;i++)
			printf("%d\n",a[i][n-l-1]);
		for(j=n-l-2;j>l;j--)
			printf("%d\n",a[m-l-1][j]);
		for(i=m-l-1;i>l;i--)
			printf("%d\n",a[i][l]);
		l++;
		p=m-2*l;
		q=n-2*l;
	}
	if(p==1)
		for(j=l;j<n-l;j++)
			printf("%d\n",a[l][j]);
	else if(q==1)
		for(i=l;i<m-l;i++)
			printf("%d\n",a[i][l]);
		else if(p==2)
		{
			for(j=l;j<n-l;j++)
				printf("%d\n",a[l][j]);
			for(j=n-l-1;j>=l;j--)
				printf("%d\n",a[l+1][j]);
		}
		else if(q==2)
		{
			printf("%d\n",a[l][l]);
			for(i=l;i<m-l;i++)
				printf("%d\n",a[i][l+1]);
			for(i=m-l-1;i>l;i--)
				printf("%d\n",a[i][l]);
		}
}