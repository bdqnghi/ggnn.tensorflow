int main()
{
	int n,a[50000][2],i,j,ai,bi,s=0,k,ta,tb;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		

		if(i!=0)
		{
			for(k=0;k<i;k++)
			{
				if(a[k][0]>a[i][0])
				{
					ta=a[k][0];
					tb=a[k][1];
					a[k][1]=a[i][1];
					a[k][0]=a[i][0];
					a[i][0]=ta;
					a[i][1]=tb;
				}
			}
		}		
	}

	ai=a[0][0];
	bi=a[0][1];

	for(i=0;i<n;i++)
	{
		if(a[i][0]<=ai&&a[i][1]>=ai)
		{
			ai=a[i][0];
		}
		else if(a[i][1]<ai)
		{
			s=1;
		}

		if(a[i][1]>=bi&&a[i][0]<=bi)
		{
			bi=a[i][1];
		}
		else if(a[i][0]>bi)
		{
			s=1;
		}
	}

	if(s==1)
		printf("no");
	else
		printf("%d %d\n",ai,bi);
	return 0;
}