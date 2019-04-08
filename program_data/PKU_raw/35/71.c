void main()
{
	int m,n,a[8][8],i,j,ln[8][2],col[8][2],max,min,k,p=0;
	scanf("%d,%d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	for (i=0;i<m;i++)
	{	max=a[i][0];
		k=0;
		for (j=0;j<n;j++)
			if (max<a[i][j]) { max=a[i][j];  k=j;}
		ln[i][0]=max;
		ln[i][1]=k;
	}
	for (j=0;j<n;j++)
	{
		min=a[0][j];
		k=0;
		for (i=0;i<m;i++)
			if (min>a[i][j]) { min=a[i][j]; k=i;}
		col[j][0]=min;
		col[j][1]=k;
	}
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			if (ln[i][0]==col[j][0]) { printf("%d+%d\n",col[j][1],ln[i][1]); p=1;}
	if (p==0) printf("No\n");
}
