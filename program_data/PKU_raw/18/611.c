int array[100][100][100]={0};
int main()
{
	int n,sum[100]={0};
	cin>>n;
	int i,j,k,t;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>array[i][j][k];
	for(i=0;i<n;i++)
	{
        for(j=1;j<=n-1;j++)
		{
			for(k=0;k<=n-j;k++)
			{
				int min=array[i][k][0];
				for(t=1;t<=n-j;t++)
					if(min>array[i][k][t])
						min=array[i][k][t];
				for(t=0;t<=n-j;t++)
					array[i][k][t]=array[i][k][t]-min;
			}			
			for(k=0;k<=n-j;k++)
			{
				int min=array[i][0][k];
				for(t=1;t<=n-j;t++)
					if(min>array[i][t][k])
						min=array[i][t][k];
				for(t=0;t<=n-j;t++)
					array[i][t][k]=array[i][t][k]-min;
			}
			sum[i]=sum[i]+array[i][1][1];
			for(k=0;k<=n-j;k++)
				for(t=1;t<n-j;t++)
					array[i][k][t]=array[i][k][t+1];
			for(k=0;k<n-j;k++)

				for(t=1;t<n-j;t++)
					array[i][t][k]=array[i][t+1][k];
		}
		cout<<sum[i]<<endl;
	}
	return 0;
}