int array[N][N];
int n,m;
int sum(int a[N][N])
{
	int sum=0;
	for(int i=0; i<n; i++)//????? 
	sum+=*(a[0]+i);
	//cout<<sum<<endl;
	for(int i=1; i<m; i++)//????????????????? 
	sum+=*(a[i]+(n-1));
	//cout<<sum<<endl;
	for(int i=n-2; i>=0; i--)//?????????????????? 
	sum+=*(a[m-1]+i);
	//cout<<sum<<endl;
	for(int i=m-2; i>=1; i--)//??????????????? 
	sum+=*(a[i]+0);
	return sum;
}
int main()
{
	int k;
	cin>>k;
	for(int i=0; i<k; i++)
	{
		cin>>m>>n;
		for(int j=0; j<m; j++)
		for(int k=0; k<n; k++)
		cin>>array[j][k];
		cout<<sum(array)<<endl;
	}
	return 0;
}