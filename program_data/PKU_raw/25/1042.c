int main()
{
	int a[101]={0};
	int b[101];
	int n,i,j;
	cin >>n;
	a[0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(j==0)
			{
				b[j]=(a[j]*2)/10;
				a[j]=(a[j]*2)%10;

			}
			else
			{
				b[j]=(a[j]*2+b[j-1])/10;
				a[j]=(a[j]*2+b[j-1])%10;
			}
		}
	}
	for(i=100;i>=0;i--)
	{
		if(a[i]!=0)
		{
			for(j=i;j>=0;j--)
			{
				cout <<a[j];
			}
			break;
		}
	}
	return 0;
}
