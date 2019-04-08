int main()
{
   int n,k,i,j;
   int a[1000]={0};
   cin>>n>>k;
   for (i=1;i<=n;i++)
	{
	   cin>>a[i];
	}
   for (i=1;i<n;i++)
	{
	j=i;
	while (j<=n)
		{
		if (a[i]+a[j]==k)
			{
		cout<<"yes";
		return 0;
			}
		j++;
		}
	}
	cout<<"no"; 
	return 0;
}

