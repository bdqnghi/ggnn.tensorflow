int main()
{
	int i,j,n,a[5]={0},flag[5]={0};
	cin >> n;
	if(n==0)cout << 0;
	if(n!=0)
		{
			for(i=0;i<5;i++)
	{
         a[i]=n%10;
		 n=n/10;
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			flag[i]=flag[i]+a[j];            //??????????????????????
		}
	}
	for(i=0;i<5;i++)
	{
		if(flag[i]!=0)cout << a[i];
		else break;
	}
	}
	return 0;
}
