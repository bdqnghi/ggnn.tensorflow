int a[11][11],b[11][11];
int k,i,j,t,s,m,n,p,q;
main()
{
	cin>>m>>n;
	a[5][5]=m;
	for(k=0;k<n;k++)
	{
		t=n%2,s=1-t;
		for(i=1;i<10;i++)
			for(j=1;j<10;j++)
				b[i][j]=0;
		for(i=1;i<10;i++)
			for(j=1;j<10;j++)
			{
				b[i][j]+=a[i][j];
				for(p=-1;p<=1;p++)
					for(q=-1;q<=1;q++)
						b[i][j]+=a[i+p][j+q];
				}
		for(i=1;i<10;i++)
			for(j=1;j<10;j++)
				a[i][j]=b[i][j];
		}
	for(i=1;i<10;i++)
	{
		cout<<a[i][1];
		for(j=2;j<10;j++)
			cout<<' '<<a[i][j];
		cout<<endl;
		}
	}
