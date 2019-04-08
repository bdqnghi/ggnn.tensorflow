int main()
{
	int n,i,j,a[100][100],x1,y1,x2,y2;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				x1=i;
				y1=j;
				i=n;
				break;
			}
		}
	for(i=n-1;i>=0;i--)
		for(j=n-1;j>=0;j--)
		{
			if(a[i][j]==0)
			{
				x2=i;
				y2=j;
				i=-1;
				break;
			}
		}
	cout<<(x2-x1-1)*(y2-y1-1)<<endl;
	return 0;
}
