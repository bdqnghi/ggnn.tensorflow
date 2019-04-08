int a[1005][1005];
int main()
{
	int n;
        cin>>n;
	for(int i=0;i<=1004;i++)
	{
		for(int j=0;j<=1004;j++)
		{
			a[i][j]=255;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	int x1=0,y1=0,x2=0,y2=0;;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==0)
			{
				x1=i;y1=j;
				break;
			}
		}
		if(x1!=0) break;
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>=1;j--)
		{
			if(a[i][j]==0)
			{
				x2=i;y2=j;
				break;
			}
		}
		if(x2!=0) break;
	}
	int s;
	s=(x2-x1-1)*(y2-y1-1);
	cout<<s;
	return 0;
}