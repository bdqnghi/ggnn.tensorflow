int main()
{
	int m=0,n,sum=0,k=0,i,j;
	char a[110][110];
	int queue[10005][5]={0},top=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		if(a[i][j]=='@')
		{top++;queue[top][1]=i;queue[top][2]=j;}
		}
	}
	cin>>m;
	for(k=1;k<=m-1;k++)
	{
		int temp=top;
		int o;
		for(o=1;o<=temp;o++)
		{
			int x=queue[o][1];
			int y=queue[o][2];
			if(a[x+1][y]!='#')
			{
				if(a[x+1][y]=='.')
				{
					top++;queue[top][1]=x+1;queue[top][2]=y;a[x+1][y]='@';
				}
			}
			if(a[x][y+1]!='#')
			{
				if(a[x][y+1]=='.')
				{
					top++;
					queue[top][1]=x;
					queue[top][2]=y+1;a[x][y+1]='@';
				}
			}
			if(a[x-1][y]!='#')
			{
				if(a[x-1][y]=='.')
				{
					top++;
					queue[top][1]=x-1;
					queue[top][2]=y;a[x-1][y]='@';
				}
			}
			if(a[x][y-1]!='#')
			{
				if(a[x][y-1]=='.')
				{
					top++;
					queue[top][1]=x;
					queue[top][2]=y-1;
					a[x][y-1]='@';
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]=='@')
				sum++;
		}
	}
	cout<<sum<<endl;
	return 0;


	 




}



	








