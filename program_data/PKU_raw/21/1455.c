int main()
{
	int i,n;
	float num=0,per;
	cin>>n;
	float a[300], p[300];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		num=num+a[i];
	}
	per=num/n;
	for(i=0;i<n;i++)
	{
		if(a[i]-per>0.000001)
		{
			p[i]=a[i]-per;
		}
		else 
		{
			p[i]=per-a[i];
		}
	}
	float max=0.0;
	for(i=0;i<n;i++)
	{
		if(p[i]-max>0.000001)
		{max=p[i];}
	}
	float p1[300];
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(p[i] == max)
		{flag=flag+1;}
	}
	if(flag<=1)
	{
		for(i=0;i<n;i++)
		{
			if(p[i]==max)
			{cout<<a[i];
			}
		}
	}
	int k=0;
	if(flag>1)
	{
		for(i=0;i<n;i++)
		{
			if(p[i]==max)
			{p1[k]=a[i];
			k++;}
		}
	}
	int temp;
	for(i=0;i<k-1;i++)
	{
		for(int j=i;j<k-1;j++)
		{
			if(p1[i]>p1[j])
			{temp=p1[i];
			p1[i]=p1[j];
			p1[j]=temp;
			}
		}
	}
	if(flag>1)
	{
	for(i=0;i<k-1;i++)
	{
		cout<<p1[i]<<",";
	}
	cout<<p1[k-1];
	}
	return 0;
}

