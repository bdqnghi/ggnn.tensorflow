int main()
{
	int a[25],k,b[25];
	cin>>k;
	int max1;
//	int dex;
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
		b[i]=1;
	}
	for(int j=k-1;j>=0;j--)
	{
		max1=0;
		for(int m=k-1;m>j;m--)
		{
			if(a[m]<=a[j]&&b[m]>=max1)
				max1=b[m];
		}
		b[j]=max1+1;
	}
	int max;
	max=b[0];
	for(int n=1;n<k;n++)
	{
		if(max<b[n])
			max=b[n];
	}
	cout<<max<<endl;
	

	return 0;
}


