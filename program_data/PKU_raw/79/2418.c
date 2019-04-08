int main()
{
	int n,m;
	cin>>n>>m;
	int a[1000];
	int i,l;
	while(n!=0)
	{

		i=1;
		for(i=1;i<=n;i++)
			a[i]=i;
		i=1;
		while(n>1)
		{


			i=i+m-1;
			while(i>n)
				i=i-n;


				for(l=i;l<n;l++)
					a[l]=a[l+1];
				n--;

		}
		cout<<a[1]<<endl;
		cin>>n>>m;
	}
	return 0;
}
