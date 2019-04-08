
int main()
{
	int n,i,sum=0;
	cin>>n;
	int num[n],a;
	for( i=0; i<n; i++)
		cin>>num[i];
	cin>>a;
	for( i=0; i<n; i++ )
		if( num[i]==a )
			num[i]=1000;
	for( i=0; i<n; i++ )
		if( num[i]!=1000 )
		{
			if(sum==0) cout<<num[i];
			else cout<<' '<<num[i];
			sum++;
		}
	return 0;
}