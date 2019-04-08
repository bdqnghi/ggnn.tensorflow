int main()
{
	int a[1000],b[1000],cnt=0,i=1,j,max=0;
	int c[1000];
	char dou;
	while(1)
	{
		cin>>a[i];
		i++;
		cnt++;
	if(	cin.get()!=',')break;

	
	}

    for(i=0;i<=999;i++)
	{
		c[i]=0;
	}
	
	for(i=1;i<=cnt-1;i++)
	{cin>>b[i];
	cin>>dou;}
	cin>>b[cnt];
	for(i=1;i<=cnt;i++)
	{
		for(j=a[i];j<b[i];j++)
		{
			c[j]++;
		}
	}
   	for(i=0;i<=999;i++)
	{
		if(c[i]>max)max=c[i];
	}
	cout<<cnt<<" "<<max<<endl;
	return 0;
}
