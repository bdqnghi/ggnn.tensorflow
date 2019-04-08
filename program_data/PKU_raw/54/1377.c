int go(int m,int n,int k,int r);
int main()
{
	int i,j,m,n,k;
	cin>>n>>k;
	for(i=1;i<1373741824;i++)
		if(go(i,n,k,0)==1)
			break;
	m=i;
	for(i=0;i<n;i++)
		m=m/(n-1)*n+k;
	cout<<m<<endl;
	return 0;
}

int go(int i,int n,int k,int r)
{
	if(r==n)
		return 1;
	else
	{
		if(i%(n-1)!=0)
			return 0;
		else
		{
			++r;
			return go(i/(n-1)*n+k,n,k,r);
		}
	}
}