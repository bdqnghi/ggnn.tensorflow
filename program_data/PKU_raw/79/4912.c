
int main()
{
	int n,m,i,j,a[301],c=1,b[100],k=0,d;
	cin>>m>>n;
	while(m!=0)
	{
	for(i=1;i<=m;i++)
	    {a[i]=i;}
	for(j=0;j<(m-1);j++)
	{
		c=(c+n-1)%(m-j);
	    if(c==0) c=m-j;
	    for(i=c;i<(m-j);i++)
		{a[i]=a[i+1];}
	}   
	    b[k]=a[1];
		k=k+1;
		cin>>m>>n;
		c=1;
	}
	for(d=0;d<k;d++)
	{cout<<b[d]<<endl;
	 cout<<endl;}	
	return 0;
}