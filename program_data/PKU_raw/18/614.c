int main()
{
	int n,a[100][100],i,j,k,m;
	cin>>n;
	for (k=1;k<=n;k++)
	{
		int num=0;
		int sum=0;
		for (i=0;i<n;i++) //??
			for (j=0;j<n;j++)
				cin>>a[i][j];
		for (m=0;m<n-1;m++) //n-1?
		{
			for (i=0;i<n-num;i++) 
			{
				int rowm=a[i][0];
				for (j=0;j<n-num;j++) //???min
				{
					if (a[i][j]<rowm) rowm=a[i][j];
				}
				for (j=0;j<n-num;j++) //??min
				{
					a[i][j]=a[i][j]-rowm;
				}
			}
			for (j=0;j<n-num;j++)
			{
				int colm=a[0][j];
				for (i=0;i<n-num;i++) //???min
				{
					if (a[i][j]<colm) colm=a[i][j];
				}
				for (i=0;i<n-num;i++) //??min
				{
					a[i][j]=a[i][j]-colm;
				}
			
			}
			sum=sum+a[1][1]; //?a[1][1]
			
			for (i=2;i<n-num;i++) //????????
			{
				for (j=0;j<n-num;j++)
					a[i-1][j]=a[i][j];
			
			}
			
			for (j=2;j<n-num;j++) //????????
			{
				for (i=0;i<n-num;i++)
					a[i][j-1]=a[i][j];			
			}
			num++;
		}
		
		
		cout<<sum<<endl;
	}



	return 0;
}