int main()
{
	char a[1000][40];
	int n,m,i,b[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=strlen(a[i])+1;
	}
	m=b[0];
	for(i=0;i<n;i++)
	{
		m+=b[i+1];
		if(m<=81&&i!=n-1)
			cout<<a[i]<<" ";
		else
		{
			cout<<a[i]<<endl;
			m=b[i+1];
		}
	}
	return 0;
}