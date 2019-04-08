int main()
{
	int n,t,j,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(j=0;j<n-1;j++)
		for(i=0;i<n-j-1;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	j=0;
	for(i=0;i<n;i++)
			if(a[i]%2==1)
				{
				j=j+1;
				if(j==1)
				cout<<a[i];
				else
				cout<<","<<a[i];
				}
	return 0;
}