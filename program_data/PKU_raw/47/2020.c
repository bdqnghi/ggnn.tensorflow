int main()
{
	int n;
	cin>>n;
	int a[100],b[100];
	int i;
	int j;
	for(i=0;i<n;i++)
		{
			cin>>a[i];
	}
	for(j=1;j<n;j++)
		
                 {
			b[j]=a[n-j];
			cout<<b[j]<<" ";
                   }
         for(j=n;j<=n;j++)
                   {
                      b[j]=a[n-j];
                     cout<<b[j];
                     }
	return 0;
}