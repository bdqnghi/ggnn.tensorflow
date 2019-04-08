int main()
{
	int m,n,i,j,k;
	int now[11][11],pre[11][11];
	for(i=0;i<=10;i++)
	{
		for(j=0;j<=10;j++)
		{
			now[i][j]=0;
		}
	}
	cin>>m>>n;
	now[5][5]=m;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=10;j++)
		{
			for(k=0;k<=10;k++)
			{
				pre[j][k]=0;
			}
		}
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			{
				pre[j-1][k-1]+=now[j][k];
				pre[j][k-1]+=now[j][k];
				pre[j+1][k-1]+=now[j][k];
				pre[j-1][k]+=now[j][k];
				pre[j+1][k]+=now[j][k];
				pre[j-1][k+1]+=now[j][k];
				pre[j][k+1]+=now[j][k];
				pre[j+1][k+1]+=now[j][k];
				pre[j][k]+=2*now[j][k];
			}
		}
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			{
				now[j][k]=pre[j][k];
			}
		}
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=8;j++)
		{
			cout<<now[i][j]<<" ";
		}
		cout<<now[i][9]<<endl;
	}
	return 0;
}