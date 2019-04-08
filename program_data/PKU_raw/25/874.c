int main()
{
	int a[100]={0},n=0;
	a[99]=1;
	int i=0,j=0,k=0;
	cin>>n;
	for(j=0;j<n;j++)
	    for(i=99;i>=0;i--)
		{
			a[i]=a[i]*2+k,k=0;
			if(a[i]>9) k=a[i]/10,a[i]=a[i]%10;
		}
	int flag=0;
	for(i=0;i<100;i++)
	{
		if(a[i]!=0) flag=1;
		if(flag!=0) cout<<a[i];
	}
	return 0;
}