int main()
{
	int n,i;
	cin>>n;
	char a[1000][40];
	int b[1000];
	int sum[1000];
	for ( i = 0 ; i < n ; i ++ )
	{
		cin>>a[i];
		b[i] = strlen(a[i]);
		sum[i]=0;
	
	}
	for ( i = 1 ; i < n ; i ++ )
	{
		sum[i] = sum[i-1] + b[i-1] + 1 ;
		sum[i+1] = sum[i] + b[i] + 1;
		if ( sum[i] < 81 && sum[i+1] <= 81 )
			cout<<a[i-1]<<" ";
		else if ( sum[i] <= 81 && sum[i+1] > 81 )
		{	
			cout<<a[i-1]<<endl;
			sum[i] = 0 ;
		}
		
	}
	cout<<a[n-1]<<endl;
}