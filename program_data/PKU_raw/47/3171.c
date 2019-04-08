int main()
{
	int n;
	cin>>n;
	int tem;
	int *p=NULL;
	int a[n];
	p=a;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		tem=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=tem;
	}
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i);
		if(i!=n-1) cout<<' ';
	}
}
