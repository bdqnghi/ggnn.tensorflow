int main()
{
	char a[300][40];
	int i=0,n,words=0;
	cin>>n;
	do
	{
		cin>>a[i];
		i++;
	}
	while(i<n);
	for(i=0;i<n;i++)
	{
		words=words+strlen(a[i])+1;
		if(i!=n-1)
		{
			if(words+strlen(a[i+1])<=80)
			{
				cout<<a[i]<<" ";
			}
		    else
			{
				cout<<a[i]<<endl;
			    words=0;
			}
		}
		if(i==n-1)
		{
			cout<<a[i];
		}
	}
	return 0;
}