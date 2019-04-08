int main()
{
	int n,k,i,t;
	cin>>n;
	int a[n];
	i=0;
	while (i<n)
	{
		cin>>a[i];
		i++;

	}
	cin>>k;
	i=0;
	
	t=0;
	while (i<n)
	{
		if (a[i]!=k)
			{
			i++;
			}
		else
		{
			t=i;
			
			while(t<(n-1))
			{
				a[t]=a[t+1];
				t++;

			}
			n--;
		}
	}
	i=0;
	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;;
	return 0;
}