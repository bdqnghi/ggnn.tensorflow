
main()
{
	int n,m;
	int i,j;
	int a[10][10];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int x;
	int l;
	int flag1=0,flag2=0;
	for(i=0;i<m;i++)
	{
		x=a[i][0];
		for(j=1;j<n;j++)
		{
			if(a[i][j]>x)
				x=a[i][j];
		}
		for(j=0;j<n;j++)
		{
			if(a[i][j]==x)
				l=j;
		}
		for(j=0;j<m;j++)
		{
			if(a[j][l]<x)
			{
				flag1=1;
				break;
			}
		}
		if(flag1==0)
		{
			flag2=1;
			printf("%d+%d",i,l);
				break;
		}
	}
	if(flag2==0)
		printf("No");
}