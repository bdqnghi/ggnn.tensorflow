int main(){
	int n,i,j,m,d,num=0,x,y;
	cin>>n;
	char a[n][n];
	 int b[n][n];//b[][]??????????????????
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='@')
				{
				num++;
				b[i][j]=1;//???????????????1
				}
			else b[i][j]=0;
		}
	cin>>m;
	for(d=1;d<=m;d++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@'&&b[i][j]>=2)//?????????????????????????????
						{
						if(i>0&&a[i-1][j]=='.'){a[i-1][j]='@';num++;b[i-1][j]++;}
					    if(i<n-1&&a[i+1][j]=='.'){a[i+1][j]='@';num++;b[i+1][j]++;}
					    if(j<n-1&&a[i][j+1]=='.'){a[i][j+1]='@';num++;b[i][j+1]++;}
					    if(j>0&&a[i][j-1]=='.'){a[i][j-1]='@';num++;b[i][j-1]++;}
						}
			}
		}
		for(x=0;x<n;x++)
			for(y=0;y<n;y++)
				{if(b[x][y]!=0)
				b[x][y]++;//?????????????????????1
				
				}
	}
cout<<num;
return 0;
}