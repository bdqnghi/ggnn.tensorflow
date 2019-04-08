int main()
{
	int x1=0,x2=0,y1=0,y2=0,i=0,j=0,h=0,sum=0;
	cin>>x1>>x2;
	int o[101][101],x[101][101],r[101][101];
	for(i=1;i<=x1;i++)
	{
		for(j=1;j<=x2;j++)
		{
			cin>>o[i][j];
		}
	}
	cin>>y1>>y2;
	for(i=1;i<=y1;i++)
	{
		for(j=1;j<=y2;j++)
		{
			cin>>x[i][j];
		}
	}
    for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y2;j++)
		{
			sum=0;
			for(h=1;h<=x2;h++)
			{
				sum=o[i][h]*x[h][j]+sum;
			}
			r[i][j]=sum;
		}
	}
	for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y2;j++)
		{
			if(j==y2)
			  cout<<r[i][j];
			else
              cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}