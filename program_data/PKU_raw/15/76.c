int main()
{
	int a[1000][1000]={{0},{0}},i,j,n,m=0,p=0,q;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{ 
			scanf("%d ",&a[i-1][j-1]);
		}

		printf("\n");
	}
	for(i=1;m==0;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i-1][j-1]==0)
			   m++;                 
         }       
	}
	for(i=1;p==0;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[j-1][i-1]==0)
			   p++;            
         }   
	}
	q=(p-2)*(m-2);
	printf("%d\n",q);
	return 0;
}