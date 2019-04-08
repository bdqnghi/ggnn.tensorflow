void main()
{
	int a[8][8],b[8][8]={0};
	int m,n,i,j,k,c=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
		b[i][j]=1;
	}
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
	    {
		    if(a[i][k]>a[i][j])
		    b[i][j]=0;
	    }
	    for(k=0;k<m;k++)
	    {
		    if(a[k][j]<a[i][j])
		    b[i][j]=0;
	    }
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		if(b[i][j]==1)
		{
			printf("%d+%d",i,j);
			c=1;
		}
	}
	if(c==0)
	printf("No\n");	
}
