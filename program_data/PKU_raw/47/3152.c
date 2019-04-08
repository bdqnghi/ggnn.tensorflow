int main()
{
	int n,i,j=0,an[100],bn[100]={0};
	cin>>n;
	for(i=0;i<n;i++)
		cin>>an[i];
	for(i=n-1;i>=0;i--)
	{
		 bn[j++]=an[i];
	}
	for(i=0;i<n;i++)
		an[i]=bn[i];
	for(i=0;i<n-1;i++)
		cout<<an[i]<<' ';
	cout<<an[n-1];
	return 0;
}