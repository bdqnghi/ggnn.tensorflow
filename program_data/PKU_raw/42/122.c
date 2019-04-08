int main()
{
	int a[100000];
	int t,k,n,i,j,l,s;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i-1];
	}
	cin >> k;
	for(t=1;t<=10;t++)
	{
	    for(j=0;j<=n-1;j++)
	    {
		    if(a[j]==k)
		    {
			    for(s=0;s<=n-2-j;s++)
			    a[j+s]=a[j+1+s];
			    n=n-1;
		    }
	    }
     }
	cout << a[0];
	for(l=1;l<=n-1;l++)
	{
		cout << " " << a[l];
	}
	return 0;
}
