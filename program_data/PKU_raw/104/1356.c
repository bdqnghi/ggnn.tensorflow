int a[10],b[10];
int main()
{
	int x,y;
	cin>>x>>y;
	int i,j,m,n,l;
	i=1;
	j=1;
	l=1;
	a[i]=x;
	b[j]=y;
	while(a[i]!=1)
	{
		a[i+1]=a[i]/2;
		i=i+1;
	}
	m=i;
	while(b[j]!=1)
	{
		b[j+1]=b[j]/2;
			j=j+1;
	}
	n=j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i]==b[j])
			{
				m=i;n=j;l=0;break;
			}
		}
		if(l==0)
		{
			break;}
	}
	cout<<a[m];
	return 0;
}

