

int main()
{
	int flag[1000];
	for (int i=0;i<1000;i++)
		flag[i]=0;
	int x,n=1;
	cin>>x;flag[x]++;
	while (getchar()==',')
	{
		cin>>x;
		n++;
		flag[x]++;
	}                              //????????
	cin>>x;flag[x]--;
	while (getchar()==',')
	{
		cin>>x;
		flag[x]--;
	}                              //????????
	int max=0,now=0;
	for (int i=0;i<1000;i++)
	{
		now+=flag[i];
		if (max<now) max=now;
	}                              //??????
	cout<<n<<' '<<max;
	return 0;
}