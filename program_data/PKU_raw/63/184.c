int main()
{
	int a[100][100],b[100][100],c[100][100];
	int i,j,ah,al,bh,bl,k,t;
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
			c[i][j]=0;
	}
	cin>>ah>>al;
	for(i=0;i<ah;i++)
	{
		for(j=0;j<al;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>bh>>bl;
	for(i=0;i<bh;i++)
	{
		for(j=0;j<bl;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<ah;i++)
	{
		for(j=0;j<bl;j++)
		{
			for(t=0,k=0;k<al;k++)
			{
				t=t+a[i][k]*b[k][j];
			}
			c[i][j]=t;
		}
	}
	for(i=0;i<ah;i++)
	{
		cout<<c[i][0];
		for(j=1;j<bl;j++)
			cout<<" "<<c[i][j];
		cout<<endl;
	}
	return 0;
}