int main()
{
	int n=0,i=0,j=0,p=0;
	int arrey[100]={0};
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arrey[i];
	for(i=0,j=n-1;i<j;i++,j--)
	{
		p=arrey[i];
		arrey[i]=arrey[j];
		arrey[j]=p;
	}
	for(i=0;i<n-1;i++)
		cout<<arrey[i]<<" ";
	cout<<arrey[n-1]<<endl;
	return 0;
}
	