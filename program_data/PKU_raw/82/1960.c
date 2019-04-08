int main()
{
	int n,high,low,a[100],d=0,num;
	cin>>n;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
	{
		cin>>high>>low;
		if((high<=140)&&(high>=90)&&(low>=60)&&(low<=90))
		{
			a[d]=a[d]+1;
		}
		else
		{
			d=d+1;
		}
	}
	for(int i=0;i<99;i++)
	{
		if(a[i]>a[i+1])
		{
			num=a[i];
			a[i]=a[i+1];
			a[i+1]=num;
		}
	}
	cout<<a[99]<<endl;
	
	return 0;
}