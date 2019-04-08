int main()
{
	int a[100][100],m,n,i,j;
	cin >>m>>n;
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
			cin>>a[j][i];
	}
	for(j=0;j<m;j++)
		for(i=0;i<n;i++)
		{
			if(j==0&&i!=0)
			{
				if(a[j][i]>=a[j][i-1]&&a[j][i]>=a[j][i+1]&&a[j][i]>=a[j+1][i])
					cout<<j<<" "<<i<<endl;
			}
			else if(j==0&&i==0)
			{
				if(a[j][i]>=a[j][i+1]&&a[j][i]>=a[j+1][i])
					cout<<j<<" "<<i<<endl;
			}
			else if(a[j][i]>=a[j][i-1]&&a[j][i]>=a[j][i+1]&&a[j][i]>=a[j-1][i]&&a[j][i]>=a[j+1][i])
				   cout<<j<<" "<<i<<endl;
		}
		return 0;
}