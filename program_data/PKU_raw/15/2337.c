int main()
{
	int n,i,j,k,a[100][100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	int sum1=0,sum2=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==0)
			{
				for(k=1;;k++)
				{
					if(a[i][j+k]==0)sum1++;
					else break;
				}
				for(k=1;;k++)
				{
					if(a[i+k][j]==0)sum2++;
					else break;
				}
				break;
			}
			if(sum1!=0)break;
		}
	}
	cout<<(sum1-1)*(sum2-1)<<endl;
	return 0;
}