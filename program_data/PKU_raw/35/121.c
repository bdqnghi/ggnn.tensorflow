void main()
{
	int n,m,i,j,max,maxj,flag,a[8][8],k;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-1;j++)
			scanf("%d ",&a[i][j]);
		scanf("%d\n",&a[i][m-1]);
	}
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		maxj=0;
		for(j=0;j<m;j++)
		
			if(a[i][j]>max)
			{
				max=a[i][j];
				maxj=j;
			}
		
			flag=1;
			for(k=0;k<n;k++)
			
				if(max>a[k][maxj])
				{
					flag=0;
					continue;
				}
			
			if(flag==1)
			{
				printf("%d+%d",i,maxj);
				break;
			}
		
	}
	if(flag==0)
		printf("No");
}