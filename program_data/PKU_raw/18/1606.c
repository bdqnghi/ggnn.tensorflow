  
int main()
{
	int n, i, j, k;
	int a[100][100];
	cin >> n;
	for(k = 1; k <=n;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		int m =n;
		int sum = 0;
		while(1)
		{
			int min;
			for(i=0;i<m;i++)
			{
				min=1000;
				for(j=0;j<m;j++)
				{
					if(min>a[i][j])
						min=a[i][j];
				}
				for(j=0;j<m;j++)
					a[i][j]-=min;
			}
			for(j=0;j<m;j++)
			{
				min=1000;
				for(i=0;i<m;i++)
					if(min>a[i][j])
						min=a[i][j];
				for(i=0;i<m;i++)
					a[i][j]-=min;
			}
			sum+=a[1][1];
			m--;
			if(m==1)
			{
				cout <<sum<<endl;
				break;
			}
			for(i=1;i<m;i++)
				a[i][0]=a[i+1][0];
			for(j=1;j<m;j++)
				a[0][j]=a[0][j+1];
			for(i=1;i<m;i++)
				for(j=1;j<m;j++)
					a[i][j]=a[i+1][j+1];
		}
	}
	return 0;
}