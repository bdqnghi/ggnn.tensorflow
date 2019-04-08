void main()
{
	int n,m,i,j,col=0,line=0,k=0,a[8][8],l;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		if(a[i][j]>a[i][line]) line=j;
		for(l=0;l<n;l++)
		if(a[i][line]>a[l][line]) break;
		if(l==n)
		{
			col=i;
			k=1;
			break;
		}
		line=0;
	}
	if(k==0) printf("No\n");
	else printf("%d+%d\n",col,line);
}
	
		