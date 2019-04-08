int minline(int n,int u,int **a)
{
	int temp=a[0][u];
	for(int i=1;i<n;i++)
	{
		if(temp>a[i][u])
		{
			temp=a[i][u];
		}
	}
	return temp;
}
int mincross(int n,int a[])
{
	int temp=a[0];
	for(int i=0;i<n;i++)
	{
		if(temp>a[i])
		{
			temp=a[i];
		}
	}
	return temp;
}

int ans(int n,int ** pp)
{
	
		int sum=0;
		
		for(int y=0;y<n-1;y++)
		{
				for(int i=0;i<n-y;i++)
				{
					int minTemp=mincross(n-y,pp[i]);
					for(int j=0;j<n-y;j++)
					{
					pp[i][j]=pp[i][j]-minTemp;
					}
				}
				for(int i=0;i<n-y;i++)
				{
					int minTemp=minline(n-y,i,pp);
					for(int j=0;j<n-y;j++)
					{
					pp[j][i]=pp[j][i]-minTemp;
					}
				}
				sum=sum+pp[1][1];

				for(int i=0;i<n-y;i++)
				{
					for(int j=1;j<n-1-y;j++)
					{
						pp[i][j]=pp[i][j+1];
					}
				}

				for(int i=0;i<n-1-y;i++)
				{
					for(int j=1;j<n-y-1;j++)
					{
						pp[j][i]=pp[j+1][i];
					}
				}
				
		}
	return sum;
}

int main (void)
{
	int n=0;
	scanf("%d",&n);
	int **pp;
	pp=(int **)malloc(n*sizeof(int *));
	for(int i=0;i<n;i++)
	{
		pp[i]=(int *)malloc(n*sizeof(int));
	}

	
	
	for(int w=0;w<n;w++)
	{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					scanf("%d",&pp[i][j]);
				}
			}
		printf("%d\n", ans(n,pp) );
	}

	for(int i=0;i<n;i++)
	{
		free(pp[i]);
	}
	free(pp);
	
	return 0;
}
