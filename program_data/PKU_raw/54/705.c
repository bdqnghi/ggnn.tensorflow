int main()
{
	int n1,k,i;
	cin>>n1>>k;
	const int n=n1;
	int a[n+1];
	a[n]=k;
	while(1)
	{    a[n]+=n;
		for(i=n;i>0;i--)
		{
			if(a[i]%(n-1)!=0) break;
			else
			a[i-1]=a[i]/(n-1)*n+k;
		}
	     if(i==1)
	   break;
	}

	cout<<a[1];
	cin.get();	cin.get();	cin.get();
	return 0;
}
