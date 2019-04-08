int main()
{
	int n,k,a;
	cin>>n>>k;
	for(int i=1;;i++)
	{
		int t;
		a=n*i+k;
		for(t=0;t<n;t++)
		{
			if(a%(n-1)==0)
			{
				a=a*n/(n-1)+k;continue;
			}
			else
				break;
		}
		if(t==n-1)
		{	cout<<a;
		break;}
		else
			continue;
	}
	return 0;
}