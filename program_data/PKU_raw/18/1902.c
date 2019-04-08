void diminish(int a[105][105],int stair)
{
	int i,j,min[105];
	for(i=1;i<=stair;i++)//??i???????
	{
		min[i]=a[i][1];
		for(j=1;j<=stair;j++)
		{
			if(a[i][j]<min[i])
			{
				min[i]=a[i][j];
			}
		}
		for(j=1;j<=stair;j++)
		{
			a[i][j]-=min[i];
		}
	}
	for(i=1;i<=stair;i++)//??i???????
	{
		min[i]=a[1][i];
		for(j=1;j<=stair;j++)
		{
			if(a[j][i]<min[i])
			{
				min[i]=a[j][i];
			}
		}
		for(j=1;j<=stair;j++)
		{
			a[j][i]-=min[i];
		}
	}
}
void lowerstair(int a[105][105],int stair)
{
	int i,j;
	for(i=2;i<=stair-1;i++)//???
	{
		for(j=1;j<=stair;j++)
		{
			a[i][j]=a[i+1][j];
		}
	}
	for(i=2;i<=stair-1;i++)//???
	{
		for(j=1;j<=stair;j++)
		{
			a[j][i]=a[j][i+1];
		}
	}
}
int deal(int a[105][105],int stair)
{
	int result=0;
	while(stair>=2)
	{
		diminish(a,stair);
		result+=a[2][2];
		lowerstair(a,stair);
		stair--;
	}
	return result;
}
void main()
{
	int n,i,j,k,stair,sum,a[105][105];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		stair=n;
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				scanf("%d",&a[j][k]);
			}
		}
		sum=deal(a,stair);
		printf("%d\n",sum);
	}
}
