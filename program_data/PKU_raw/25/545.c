int main()
{
	int n=0,d=0,i=0,j;
	int a[1000]={0};
	memset(a,0,sizeof(a));
	cin>>n;
	int p=1;
	a[1]=1;
	for(i=1;i<=n;i++)
	{
		d=0;
		for(j=1;j<=p;j++)
		{
			a[j]=d+a[j]*2;d=d-d;
			if(a[j]>=10)
			{
				a[j]=a[j]-10;d=1;
			}
		}
	   a[p+1]=d+a[p+1];
	if(a[p+1]!=0)
	{p=p+1;}
	}
	i=999;
	for(;i>=0;i--)
	{
		if(a[i]!=0) 
		{p=i;break;}
	}
	for(i=p;i>=1;i--)
		cout<<a[i];
	return 0;
}

