int m,n,k[100][100];
void display(int i,int j)
{
	if(i>=m||j>=n||i<0||j<0)
	{
		return;
	}
	else
	{
		cout<<k[i][j]<<endl;
		display(i+1,j-1);
	}
}
int main()
{
	int i=0,j=0;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>k[i][j];
		}
	}
	for(j=0;j<n;j++)
	{
		display(0,j);
	}
	for(i=1;i<m;i++)
	{
		display(i,n-1);
	}
	return 0;
}