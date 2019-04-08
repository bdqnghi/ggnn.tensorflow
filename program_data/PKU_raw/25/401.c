int main()
{
	int a[100];
	int i,n,k,j;
	cin>>n;
	for(i=0;i<100;i++)
		a[i]=0;
	    a[0]=1;
	for(k=1;k<=n;k++)
	{
		for(i=0;i<100;i++)
			a[i]=2*a[i];
		for(i=0;i<100;i++)
			if(a[i]>=10)
		    {
				a[i]=a[i]-10;
				a[i+1]++;
			}
	}
	for(i=99;i>=0;i--)
	{
		if(a[i]!=0)
		{
			j=i;
			break;
		}
	}
	for(i=j;i>=0;i--)
		cout<<a[i];
	return 0;
}