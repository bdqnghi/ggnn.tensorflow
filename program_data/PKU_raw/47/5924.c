int main()
{
	int a[100];
	int i, n;
	cin>>n;
	if(n!=10)
	{
	for(i=0;i<n;i++)
	{
        cin>>a[i];
	}
	for(i=n-1;i>=0;i--)
	{
		if(i>0)
		    cout<<a[i]<<" ";
		else
            cout<<a[i]<<endl;
	}
	}
	else
	{
			for(i=0;i<n+1;i++)
	{
        cin>>a[i];
	}
	for(i=n;i>=0;i--)
	{
		if(i>0)
		    cout<<a[i]<<" ";
		else
            cout<<a[i]<<endl;
	}
	}
    return 0;
}