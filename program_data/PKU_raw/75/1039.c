int main()
{
	int i=0,j,x[1001],y[1001],count[1001];
	for(int t=0;t<1001;t++)  count[t]=0;
	char a;
	while(1)
	{
		cin>>x[i];
		if(cin.get()!=',')
			break;
		i++;
	}
	for(j=0;j<i;j++)
		cin>>y[j]>>a;
	cin>>y[i];
	for(j=0;j<=i;j++)
		for(int k=x[j];k<y[j];k++)
			count[k]++;
		int max=0;
    for(j=0;j<1001;j++)
	{
		if(count[j]>max)
			max=count[j];
	}
     cout<<i+1<<" "<<max<<endl;
	 return 0;
}