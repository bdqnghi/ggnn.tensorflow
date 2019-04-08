int main()
{
	int n,i,j,l,k;
	char M[100][10000];
	cin>>n;
	for ( i=0 ; i<n ; i++ )
	{
		cin>>M[i];
		l=strlen(M[i]);
		for ( j=0 ; j<l ; j++ )
		{
			for ( k=0 ; k<l ; k++ )
			{
				if ( M[i][k]==M[i][j]&&k!=j )
					break;
			}
			if ( k==l )
			{
				cout<<M[i][j]<<endl;
				break;
			}
		}
		if ( j==l )
			cout<<"no"<<endl;
	}
	return 0;
}