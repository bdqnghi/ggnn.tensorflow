
int main()
{
	int x[1001],y[1001],i=1,j,t,r[1001]={0},max,maxy;
	char c=',';
	for(;;)
	{
		cin>>x[i];
		c=getchar();
		if (c=='\n') break;
		i++;
	}
	i=1;
	for(;;)
	{
		cin>>y[i];
		c=getchar();
		if (c=='\n') break;
		i++;
	}
	maxy=0;
	for (j=1;j<=i;j++)
		if (y[j]>maxy)
			maxy=y[j];
	max=0;
	for (t=0;t<=maxy;t++)
	{
		for (j=1;j<=i;j++)
		{
			if ((x[j]<=t) && (t<y[j]))
				r[t]++;

		}
		//cout<<t<<' '<<r[t]<<endl;

		if (max<r[t])
			max=r[t];
	}

	cout<<i<<' '<<max;


	return 0;
}