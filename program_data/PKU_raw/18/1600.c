int main()
{
	int n,i,j,k,l;
	cin>>n;
	int a[100][100];
	int sum=0,temp=1;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		int min;
		sum=0;temp=1;
		for(l=0;l<n-1;l++)
		{
		for(i=0;i<n;i++)
		{
			min=a[i][0];
			for(j=0;j<n;j++)
				if(a[i][j]<min&&a[i][j]>=0)
					min=a[i][j];
			for(j=0;j<n;j++)
				if(a[i][j]>=0)
				a[i][j]-=min;
		}
		for(j=0;j<n;j++)
		{
			min=a[0][j];
			for(i=0;i<n;i++)
				if(a[i][j]<min&&a[i][j]>=0)
					min=a[i][j];
			for(i=0;i<n;i++)
				if(a[i][j]>=0)
				a[i][j]-=min;
		}
		sum+=a[temp][temp];
		for(i=0;i<n;i++)
			a[i][temp]=-1;
		for(j=0;j<n;j++)
			a[temp][j]=-1;
		temp++;
		}
		cout<<sum<<endl;
	}
	return 0;
}