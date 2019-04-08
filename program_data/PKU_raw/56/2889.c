int main()
{
	int n,a[6],i;
	cin>>n;
	for (i=1;i<6;i++)
	{
		a[i]=(((int)(n/pow(10*1.0,(5-i)*1.0))%10));//???????i????n/?10?5-i???
	}
	for (i=1;i<6;i++)
	{
		if (a[6-i]!=0)
		cout<<a[6-i];
	}
	return 0;
}