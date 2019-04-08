void main()
{
	int n=0;
	scanf("%d",&n);
	int i,j,k;
	int flag=0;
	int gl(int num[][200],int n);
	for(i=0;i<n;i++)
	{
		int sum=0;
		int num[200][200]={0};
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				scanf("%d",&num[j][k]);
		sum=gl(num,n);
		printf("%d\n",sum);
	}
}

int gl(int num[][200],int n)
{
	int i=0,j=0,k=0;
	int min=0;
	int flag=0;
	int sum=0;
	for(flag=0;flag<n-1;flag++)
	{
	for(i=0;i<n;i++)
	{
		min=num[i][0];
		for(j=0;j<n;j++)
		{
			if(num[i][j]<min)
			{
				min=num[i][j];;
			}
		}
		for(j=0;j<n;j++)
		{
			num[i][j]=num[i][j]-min;
		}
	}                                               
	for(i=0;i<n;i++)
	{
		min=num[0][i];
		for(j=0;j<n;j++)
		{
			if(num[j][i]<min)
			{
				min=num[j][i];;
			}
		}
		for(j=0;j<n;j++)
		{
			num[j][i]=num[j][i]-min;
		}
	}                                           
	sum+=num[1][1];
	


		for(j=0;j<n;j++)       
		{
			for(i=2;i<n;i++)
			{
				num[j][i-1]=num[j][i];
			}
			num[j][i]=0;
		}
		for(j=0;j<n;j++)
		{
			for(i=2;i<n;i++)
			{
				num[i-1][j]=num[i][j];
			}
			num[j][i]=0;
		}
	}
			return sum;
}
