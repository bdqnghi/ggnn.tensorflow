int main()
{
	double shu[300];
	double ping;
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>shu[i];
	double sum=0;
	for (int i=0;i<n;i++)
		sum=sum+shu[i];
	ping=sum/n;
	double temp;
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (shu[i]>shu[j])
			{
				temp=shu[i];
				shu[i]=shu[j];
				shu[j]=temp;
			}
		}
	}
	double cha[300];
	for (int i=0;i<n;i++)
		cha[i]=abs(ping-shu[i]);
	double max=0;
	for (int i=0;i<n;i++)
	{
		if (max<=cha[i]) max=cha[i];
	}
	int count=0;
	int flag;
	for (int i=0;i<n;i++)
	{
		if (max==cha[i]) {count++;flag=i;}
	}
	if (count==1) cout<<shu[flag];
	else 
	{
		for (int i=0;i<n;i++)
		{
			if (max==cha[i]) {cout<<shu[i];flag=i;break;}
		}
		for (int i=flag+1;i<n;i++)
		{
			if (max==cha[i]) cout<<','<<shu[i];
		}
	}
	return 0;
}