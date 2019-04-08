int main()
{
	int n,arr[100][100],i,j,k,l,min,sum=0;
	cin>>n;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		} //??
		for(l=n;l>1;l--)
		{
			for(i=0;i<l;i++)
			{
				min=arr[i][0];
				for(j=1;j<l;j++)
				{
					if(arr[i][j]<min)
					{
						min=arr[i][j];
					}
				}
				for(j=0;j<l;j++)
				{
					arr[i][j]=arr[i][j]-min;
				}
			}
			for(j=0;j<l;j++)
			{
				min=arr[0][j];
				for(i=1;i<l;i++)
				{
					if(arr[i][j]<min)
					{
						min=arr[i][j];
					}
				}
				for(i=0;i<l;i++)
				{
					arr[i][j]=arr[i][j]-min;
				}
			} //??
			sum=sum+arr[1][1]; //?????arr[1][1]
			for(i=1;i<l;i++)
			{
				for(j=0;j<l;j++)
				{
					arr[i][j]=arr[i+1][j];
				}
			}
			for(j=1;j<l;j++)
			{
				for(i=0;i<l-1;i++)
				{
					arr[i][j]=arr[i][j+1];
				}
			} //??
		}
		cout<<sum<<endl;
	    memset(arr,0,sizeof(arr));
		sum=0;
	}
	return 0;
}