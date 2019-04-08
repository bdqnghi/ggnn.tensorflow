void main()
{
	int i,j,m,n,q,p,c;
	int a[8][8];
	int max[8]={0},k[8]={0};
	q=0;
	p=0;
	scanf("%d,%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]>max[i]) { max[i]=a[i][j]; k[i]=j;}
		}
	}
	for(i=1;i<=n;i++)
	{
		q=0;
		c=k[i];
		for(j=1;j<=n;j++)
		{
			if(max[i]>a[j][c]) q=1;
		}
	    if(q==0) {printf("%d+%d",i-1,c-1);p=1;}
	} 
	
	if(p==0) printf("No");
}