int main()
{
	int a[100][100][100],n,t;
	cin>>n;
	for(int x=0;x<n;x++)
	{
	       for(int i=0;i<n;i++)
	        {
		       for(int j=0;j<n;j++)
               cin>>a[x][i][j];
	         }
	}
	for(int x=0;x<n;x++)
	{
		int sum=0;
		int m=n;
		   while(m>1)
		   {
	for(int i=0;i<m;i++)
	{
		int min=a[x][i][0];
		for(int j=0;j<m;j++)
		{
			if(a[x][i][j]<min)
			{
				min=a[x][i][j];
			}
		}
		for(int k=0;k<m;k++)
			a[x][i][k]-=min;
	}
	for(int j=0;j<m;j++)
	{
		int min=a[x][0][j];
		for(int i=0;i<m;i++)
		{
			if(a[x][i][j]<min)
				min=a[x][i][j];
		}
		for(int k=0;k<m;k++)
			a[x][k][j]-=min;
	}
	sum+=a[x][1][1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==0&&j>1)
			{
				a[x][i][j-1]=a[x][i][j];
			}
			if(i>1)
			{
				if(j==0)
			{
				a[x][i-1][j]=a[x][i][j];
			}
			if(j>1)
			{
				a[x][i-1][j-1]=a[x][i][j];
			}}}}
	m--;
		   }
		   cout<<sum<<endl;;
	}
		return 0;
}