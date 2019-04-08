int main()
{
	int i,j,count=0,p=0,n;
	int a[20002]={0},b[20002]={0};
	cin >>n;
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			if(a[i]==a[j])b[i]=1;
		}
		if(b[i]==0)count=count+1;
	}
	for(i=1;i<=n;i++)
	{
		if(b[i]!=1)
		{
			p=p+1;
			if(p!=count)cout<<a[i]<<" ";
			else cout<<a[i]<<endl;
		}
	}
	return 0;
}
	
