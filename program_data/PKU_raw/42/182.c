int main()
{
    int i=0,p,k,b,n,j=0,t;
	cin>>n;
	int a[100000]={0};
	for (p=0;p<=n-1;p++)
	{
		cin>>a[p];
	};
	cout<<endl;
	cin>>b;
	for (t=0;t<=n-1;t++)
	{
		if (a[t]!=b)
		break;
	} 
	for (i=t+1,j=t+1;j<=n-1;j++)
	{
		if (a[j]!=b)
		{
			a[i]=a[j];
			i++;
		}
	}
		cout<<a[t];
	
	for (k=t+1;k<=i-1;k++)
	{
		cout<<" "<<a[k];
	}
	return 0;
}