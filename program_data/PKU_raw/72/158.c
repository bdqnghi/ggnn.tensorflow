int main()
{
	int x=0,y=0,i=0,j=0,avg=0;
	int h[22][22]={0};
	int outx[400],outy[400],count=0;
	cin>>x>>y;
	for(i=0;i<22;i++)
	{
		for(j=0;j<22;j++)
		{
			h[i][j]=0;
		}
	}
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
		{
			cin>>h[i][j];
		}
	}
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
		{
			if((h[i][j]>=h[i-1][j])&&(h[i][j]>=h[i+1][j])&&(h[i][j]>=h[i][j-1])&&(h[i][j]>=h[i][j+1]))
			{
				outx[count]=i;
				outy[count++]=j;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		cout<<outx[i]-1<<" "<<outy[i]-1<<endl;
	}
	return 0;
}


