int main ()
{
	int n,m,i,j,a[100][100]={0},b[100]={0};
	int T;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		for(j=1;j<=m;j++)
			cin>>a[i][j];
	}
	for(i=1;i<=n;i++)
	{
		T=0;
		j=1;
		while(a[i][j]!=0)
			{
				if((a[i][j]-a[i][j-1]+T)<=60)
		if((a[i][j]-a[i][j-1]+T+3)<=60)
		{
			T=T+a[i][j]-a[i][j-1]+3;
			j++;
		}
		else break;
			else break;
		}
		if(a[i][j]!=0&&(a[i][j]-a[i][j-1]+T)<=60) b[i]=a[i][j];
		else b[i]=a[i][j-1]+60-T;
	}
	for(i=1;i<=n;i++)
		cout<<b[i]<<endl;
	return 0;
}
