int x1=0,x2=0;
int y1=0,y2=0;
int tag=0;
int sum=0;
int main()
{
	int n,i,j;
	int a[100][100];
	cin>>n;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		   cin>>a[i][j];
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i][j]==0)
			{
				x1=j;y1=i;
				while (!a[y1][j])
					j++;
				x2=j-1;
				while (!a[i][x1])
					i++;
				y2=i-1;
				tag=1;
				break;
			}
		}
		if (tag) break;
	}
	if (!tag)
	{
		cout<<0<<endl;
		return 0;
	}
		sum=(x2-x1-1)*(y2-y1-1);
		cout<<sum<<endl;
		return 0;
}
