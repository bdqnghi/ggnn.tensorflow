int main()
{
	int a[5][5],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			int m,f=1;
			for(m=0;m<5;m++)
			{
				f=f*(a[i][j]>=a[i][m]);
			}
			if(f!=0)
			{
				int s,t=1;
				for(s=0;s<5;s++)
				{
					t=t*(a[i][j]<=a[s][j]);
				}
				if(t!=0)
				{
					printf("%d %d %d",i+1,j+1,a[i][j]);
					return 0;
				}
			}
		}
	}
	printf("not found");
	return 0;
}