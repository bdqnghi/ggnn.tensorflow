void sub(int a[M],int n)
{
	int i,min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
			min=a[i];
	}
	for(i=0;i<n;i++)
		a[i]-=min;
}
int main()
{
	int n,k,i,j,count,sum;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		int a[M][M],temp[M];
		sum=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		}
		for(count=0;count<n-1;count++)
		{
			for(i=count;i<n;i++)
			{
				for(j=count;j<n;j++)
					temp[j-count]=a[i][j];
				sub(temp,n-count);
				for(j=count;j<n;j++)
					a[i][j]=temp[j-count];
			}
			for(j=count;j<n;j++)
			{
				for(i=count;i<n;i++)
					temp[i-count]=a[i][j];
				sub(temp,n-count);
				for(i=count;i<n;i++)
					a[i][j]=temp[i-count];
			}
			sum+=a[count+1][count+1];
			for(i=0;i<n;i++)
				a[i][count+1]=a[i][count];
			for(j=0;j<n;j++)
				a[count+1][j]=a[count][j];
		}
		printf("%d\n",sum);
	}
	return 0;
}
