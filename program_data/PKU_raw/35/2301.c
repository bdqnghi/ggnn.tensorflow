int main()
{
	int m,n,i,j;
	int a[100][100];
	int flag1[100][100]={0};
	int flag2[100][100]={0};
	int p,q;
	int point=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				for(p=0;p<n;p++)
				{
					if(a[i][j]<a[i][p])
						flag1[i][j]=flag1[i][j]+1;

				}
				for(q=0;q<m;q++)
				{
					if(a[i][j]>a[q][j])
					flag2[i][j]=flag2[i][j]+1;
				}
			}
		}
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			    if(flag1[i][j]==0&&flag2[i][j]==0)
			    {
			    	printf("%d+%d\n",i,j);
			    	point=point+1;
			    }

			}
		}

		if(point==0)
			printf("No");
		return 0;
}
