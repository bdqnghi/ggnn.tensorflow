int main ()
{
	int a[10000]={0};
	int n;
	cin>>n;
	a[0]=1;
	if(n==0)
	{
		cout<<'1';
	}
	int jinwei=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=10000;j++)
		{
			a[j-1]=a[j-1]+a[j-1]+jinwei;
			if(a[j-1]>9)
			{
				a[j-1]=a[j-1]-10;
				jinwei=1;
			}
			else
			{
				jinwei=0;
			}
		}
	}
	int len;
	for(int i=10000;i>0;i--)
	{
		if(a[i-1]!=0)
		{
			len=i;
			break;
		}
	}
	if(n!=0)
	{
		for(int i=len;i>0;i--)
		{
			cout<<a[i-1];
		}
	}
	return 0;
}