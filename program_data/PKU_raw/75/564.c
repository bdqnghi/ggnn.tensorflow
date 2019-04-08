int main()
{
	int i,j,k,s=0,max=0,t=0;
	int a[1020],b[1020],d[1000]={0};
	char c;
	for(i=1;;i++)
	{
		cin>>a[i];
		c=cin.get();
		if(c!=',') break;
	}
	for(j=1;j<=i;j++)
	{
		cin>>b[j];
		cin.get();
		if(b[j]>t) t=b[j];
	}
	for(j=1;j<=i;j++)
	{
		for(k=a[j];k<b[j];d[k]++,k++);
	}
	for(j=0;j<=t;j++)
	{
		if(d[j]>max) max=d[j];
	}
	cout<<i<<" "<<max<<endl;
	return 0;
}
	