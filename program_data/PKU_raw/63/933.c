void main()
{
    int m,n,a[100][100],c[100][100],d[100][100]={{0}},i,j,s,t,k;
	char b;
	scanf("%d %d%c",&m,&n,&b);
     for(i=0;i<=m-1;i++)
	{for(j=0;j<=n;j++)
	 {if(j<=n-1)
		 scanf("%d",&a[i][j]);
	 else scanf("%c",&b);}}

	scanf("%d %d%c",&s,&t,&b);
     for(i=0;i<=s-1;i++)
	{for(j=0;j<=t;j++)
	 {if(j<=t-1)
		 scanf("%d",&c[i][j]);
	 else scanf("%c",&b);}}

	for(i=0;i<=m-1;i++)
	{for(j=0;j<=t-1;j++)
	  {for(k=0;k<=n-1;k++)
	  d[i][j]=a[i][k]*c[k][j]+d[i][j];}}

	for(i=0;i<=m-1;i++)
	{for(k=0;k<=t-1;k++)
	{if(k<=t-2) printf("%d ",d[i][k]);
	else  printf("%d\n",d[i][k]);}}
}