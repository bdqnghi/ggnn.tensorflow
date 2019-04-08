int main()
{
	int n,i,j,jinwei,a[50]={0};
	cin>>n;
	a[0]=1;
	for(i=1;i<=n;i++)
	{
		jinwei=0;
		for(j=0;j<49;j++)
		{
			a[j]=a[j]*2+jinwei;
			if(a[j]>=10)
			{
				a[j]=a[j]-10;
				jinwei=1;
			}
			else
				jinwei=0;
		}
	}
	i=49;
	while(a[i]==0)
		i--;
	for(;i>=0;i--)
		cout<<a[i];
	return 0;
}