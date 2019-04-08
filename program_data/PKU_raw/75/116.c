int main()
{
	char p;
	int time1[1000];
	int time2[1000];
	int min=1000;
	int max=0;
	int i,j;
	i=0;
	j=0;
	int n=0;
	while(cin>>time1[i])
	{
		p=cin.get();
		if(p==',')
		{
			i++;
			continue;
		}
		else
		{
			break;
		}
	}
	n=i+1;
	i=0;
	while(cin>>time2[i])
	{
		p=cin.get();
		if(p==',')
		{
			i++;
			continue;
		}
		else
		{
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(time1[i]<min)
		{
			min=time1[i];
		}
		if(time2[i]>max)
		{
			max=time2[i];
		}
	}
	int count[1000]={0};
	int maxtime=0;
	for(i=min;i<=max;i++)
	{
		for(j=0;j<n;j++)
		{
			if(time1[j]<=i && time2[j]>i)
			{
				count[i]++;
			}
		}
		if(count[i]>maxtime)
		{
			maxtime=count[i];
		}
	}
	cout<<n<<' '<<maxtime<<endl;
	return 0;
}