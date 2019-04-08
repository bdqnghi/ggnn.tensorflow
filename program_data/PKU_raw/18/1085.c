int main()
{
	int n=0,t=0,m=0;
	cin>>n;
	
	for(t=0;t<n;t++)//n???
	{
		int arr[100][100];
		int i=0,j=0,k=0,sum=0,m=n;//m???????????
		for(i=0;i<n;i++)//??
			for(j=0;j<n;j++)
				cin>>arr[i][j];
		for(i=1;i<n;i++)//n-1???
		{
			for(j=0;j<m;j++)//???????
			{
				int min=arr[j][0];
				for(k=0;k<m;k++)
					if(arr[j][k]<min)
						min=arr[j][k];
				for(k=0;k<m;k++)
					arr[j][k]-=min;
			}
			for(j=0;j<m;j++)//???????
			{
				int min=arr[0][j];
				for(k=0;k<m;k++)
					if(arr[k][j]<min)
						min=arr[k][j];
				for(k=0;k<m;k++)
					arr[k][j]-=min;
			}
			sum+=arr[1][1];//?2,2???????
			for(j=2;j<m;j++)//?????????
			{
				arr[0][j-1]=arr[0][j];
				arr[j-1][0]=arr[j][0];
			}
			for(j=2;j<m;j++)
				for(k=2;k<m;k++)
				{
					arr[j-1][k-1]=arr[j][k];
				}
			m--;//???????1
		}
		cout<<sum<<endl;//
	}
	return 0;
}