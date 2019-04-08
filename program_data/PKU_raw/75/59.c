int main()
{
	int a[1000]={0};
	int b[1000][2]={0};
	char c='\0';
	int i=0;
	int max=0,time=0;
	while(c!='\n')
	{
		cin>>b[i][0];
		c=cin.get();
		i++;
	}
	i=0;
	c='\0';
	while(c!='\n')
	{
		cin>>b[i][1];
		c=cin.get();
		i++;
	}
	for(int j=0;j<i;j++)
	{
		for(int t=b[j][0];t<b[j][1];t++)
			a[t]++;
	}
	for(int j=0;j<1000;j++)
	{
		if(a[j]>max)
			max=a[j];
	}
	printf("%d %d\n",i,max);
	return 0;
}