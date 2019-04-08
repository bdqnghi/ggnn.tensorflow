
		

int main()
{
	int n,k,i;
	cin>>n>>k;
	int a[1000];
	a[n]=k;
	while(i>1)
	{
		a[n]=a[n]+n;
		for(i=n;i>1;i--)
		{
			if(a[i]%(n-1) != 0)
			{
				break;
			}
			else
			{
				a[i-1]=a[i]*n/(n-1)+k;
			}
		}
	}
	cout<<a[1];
	return 0;
}