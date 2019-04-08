
void main()
{
	int i,m,n;
	int zz[1000];
	cin>>n>>m;
	for(i=m;i<m+n;i++)
		cin>>zz[i];
	for(i=n;i<m+n;i++)
		zz[i-n]=zz[i];
	for(i=0;i<n-1;i++)
		cout<<zz[i]<<" ";
	cout<<zz[n-1]<<endl;

}