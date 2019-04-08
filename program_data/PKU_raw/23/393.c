int main()
{
	char c,a[50][50];
	int i=0,j;
	while(cin>>a[i])
	{
		i++;
	}
	for(j=i-1;j>0;j--)
	{
		cout<<a[j]<<" ";
	}
	cout<<a[0];
	return 0;
}

