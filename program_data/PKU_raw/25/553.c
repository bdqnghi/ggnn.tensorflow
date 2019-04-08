int main()
{
	int n,i,j;
	cin >>n;
	int re[100]={0};
	re[0]=1;
	for (i=0;i<n;i++)
	{
		for (j=0;j<100;j++)
		{
			re[j]=re[j]*2;
		}
		for (j=0;j<100;j++)
		{
			if (re[j]>=10)
			{
				re[j+1]+=re[j]/10;
				re[j]=re[j]%10;
			}
		}
	}
	for (i=50;i>=0;i--)
	{
		if (re[i]!=0)
		{
			j=i+1;
			break;
			
		}
	}
	while (j--)
	{
		cout <<re[j];
	}

	return 0;
}

