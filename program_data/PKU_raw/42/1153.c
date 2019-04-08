int main()
{
	int n,a[100000],k,i,j,p;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(i=0;i<n;)
	{
		if(a[i]==k)
		{
			for(j=i;j<n-1;j++)
				a[j]=a[j+1];
			n-=1;
		}
		else i++;
	}
	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;
	return 0;
}