int main()
{
	int a[5][5],b[5][5],i,j,m,n,e=0;
	memset(b,0,sizeof(b));
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)
	{
		m=0;
		for(j=0;j<5;j++)
			if(m<a[i][j])
				m=a[i][j];
		for(j=0;j<5;j++)
			if(a[i][j]==m)
				b[i][j]=1;
	}
	for(j=0;j<5;j++)
	{
		m=1073741824;
		for(i=0;i<5;i++)
			if(m>a[i][j])
				m=a[i][j];
		for(i=0;i<5;i++)
			if(a[i][j]==m)
				b[i][j]*=-1;
	}
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(b[i][j]==-1)
			{
				cout<<i+1<<" "<<j+1<<" "<<a[i][j]<<endl;
				e=1;
			}
	if(e==0)
		cout<<"not found"<<endl;
	return 0;
}