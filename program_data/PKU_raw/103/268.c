int main()
{
	char a[1005],b[1005];
	cin>>a;
	int len,i;
	int sum[1005],t=0;
	memset(sum,0,sizeof(sum));
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='a')
			b[t]=a[i]-32;
		else
		{
		b[t]=a[i];
		}
		while(a[i]==b[t]||a[i]==b[t]+32||a[i]==b[t]-32)
		{
			i++;
			sum[t]++;
		}
		t++;i--;
	}
	for(i=0;i<t;i++)
	{
		cout<<"("<<b[i]<<","<<sum[i]<<")";
	}
	cout<<endl;
	return 0;
}








