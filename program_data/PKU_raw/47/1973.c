int main()
{
	int a[100]={0};//??????
	int n,i,t;
	cin>>n;
	for(i=n-1;i>=0;i--)//???????????
	{
		cin>>t;
		a[i]=t;
	}
    for(i=0;i<n-1;i++)//????
	{
		cout<<a[i]<<' ';
	}
	    cout<<a[n-1];
        return 0;
}
