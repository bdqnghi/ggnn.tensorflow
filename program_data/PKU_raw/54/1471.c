

int main()
{
	int n,k,i,j,a;

	cin>>n>>k;
	for (i=1;;i++)
	{
		a=i*n+k;
		for (j=1;j<n;j++)
		{
			if ((n*a)%(n-1)==0)
				a=n*a/(n-1)+k;
			else
			{
				a=0;
				break;
			}
		}
		if (a==0)
			continue;
		else
		{
			cout<<a<<endl;
			break;
		}
	}
	return 0;
}