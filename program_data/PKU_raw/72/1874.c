int main()
{
	int hang,lie;
	cin>>hang>>lie;
	int a[20][20];
	for (int i1=0;i1<hang;i1++)
	{
		for (int j1=0;j1<lie;j1++)
		{
			cin>>a[i1][j1];  //:????
		} 
	}

	for (int i=0;i<hang;i++)
	{
		for (int j=0;j<lie;j++)   //:?????????????????continue
		{
			if ( (i-1)>=0 && a[i][j]<a[i-1][j])
				continue;
			if ( i+1<hang && a[i][j]<a[i+1][j])
				continue;
			if ( j-1>=0 && a[i][j]<a[i][j-1])
				continue;
			if ( j+1<lie && a[i][j]<a[i][j+1])
				continue;
			cout<<i<<" "<<j<<endl;
		}
	}
	return 0;
}