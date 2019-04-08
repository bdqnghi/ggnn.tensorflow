int main()
{
	int n,i,j,sum=0,jie=1,c[100];
	float a[100][300],b[100];
		scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		b[i]=0;
	}

	for(i=1;i<=n;i++)
	{
		scanf("%d",&c[i]);
		for(j=1;j<=c[i]+2;j++)
		{
			if(j==1)
				a[i][j]=1.0;
			else if(j==2)
				a[i][j]=2.0;
			else
				a[i][j]=a[i][j-1]+a[i][j-2];
			
		}
		
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=c[i];j++)
		{
			b[i]+=a[i][j+1]/a[i][j];
		}
		
		
		printf("%.3f\n",b[i]);
	}
	return 0;
}

