int main()
{
	void f(int a[],int b[],int n,int m);
	int a[100],b[100],i,n,m;
	cin>>n>>m;
	for(i=0;i<n;i++)//?????
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	f(a,b,n,m);
	return 0;
}
void f(int a[],int b[],int n,int m)
{
	int k,j,t;
	for(j=0;j<n-1;j++)//????
		for(k=0;k<n-1-j;k++)
			if(a[k]>a[k+1])
			{ t=a[k];a[k]=a[k+1];a[k+1]=t; }
	for(j=0;j<m-1;j++)
		for(k=0;k<m-1-j;k++)
			if(b[k]>b[k+1])
			{ t=b[k];b[k]=b[k+1];b[k+1]=t; }
	for(k=n;k<n+m;k++)//????
		a[k]=b[k-n];
	cout<<a[0];
	for(k=1;k<n+m;k++)
		cout<<' '<<a[k];
}