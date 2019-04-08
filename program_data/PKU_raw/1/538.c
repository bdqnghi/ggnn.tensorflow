int reek(int i,int j)
{
	int k,g=0;
	for (k=j;k<i;k++)
	{
		if ((i%k==0)&&(k!=1))
		{
			g=1;
			break;
		}
		else continue;
	}
	if (g==0) return 1;
	else
	{
		int num=1;
		for(k=j;k<=sqrt(i);k++)
		{
			if ((i%k==0)&&(k!=1))
				num+=reek(i/k,k);
			else continue;
		}
		return num;
	}
}
int main()
{
	int n,i,a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[n];
		cout<<reek(a[n],1)<<endl;
	}
	return 0;
}
		
	
