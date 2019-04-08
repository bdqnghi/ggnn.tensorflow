int main()
{
	int n=0;
	cin>>n;
	int i=0;
	int j=0;
	int in[100]={0};
	int out[100]={0};
	for(i=0;i<n;i++)
	{
		cin>>in[i];
	}
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		out[j]=in[i];
	}
	for(i=0;i<n-1;i++)
	{
		cout<<out[i]<<" ";
	}
	cout<<out[n-1]<<endl;
	return 0;
}