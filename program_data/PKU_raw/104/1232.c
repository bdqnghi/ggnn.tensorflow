//???
int main( )
{
	int fa(int x,int y);
	int x,y;
	cin>>x>>y;
	cout<<fa(x,y);
	return 0;
}
int fa(int x,int y)
{
	int a[10],b[10];
	int i,m,n,p;
	a[0]=x;
	b[0]=y;
	if(x==1||y==1)
		return 1;
	for(i=1;i<=10;i++)
	{
		a[i]=a[i-1]/2;
		m=i;
		if(a[i]==1)
			break;
	}
	for(i=1;i<=10;i++)
	{
		b[i]=b[i-1]/2;
		n=i;
		if(b[i]==1)
			break;
	}
	if(m>n)
		p=n;
	else p=m;
	for(i=0;i<=p;i++)
	{
		if(a[m-i]!=b[n-i])
		{
			break;
		}
	}
	return a[m-i+1];
}

