int main()
{
	int n,num;
	cin>>n;
	int a[100];
	int i,j,k;
	for(i=0;i<100;i++)
	{
		a[i]=0;
	}
    a[99]=1;
	for(j=0;j<n;j++)
	{
		for(i=0;i<100;i++)
	{
		a[i]=a[i]*2;
		if(a[i]>=10)
		{
			a[i]=a[i]-10;
			a[i-1]=a[i-1]+1;
		}
	}
	}
for(i=0;i<100;i++)
{
	if(a[i]!=0)
	{
		num=i;
		break;
	}
}
for(i=num;i<100;i++)
{
	cout<<a[i];
}
}