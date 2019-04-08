//******************
//?7???????**********
int main()
{
	int n=0,i=1,a[100],sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%7==0)
		a[i]=0;
		if(a[i]%10==7)
		a[i]=0;
		if(((a[i]-a[i]%10)/10)==7)
			a[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i]*a[i];
	}
	cout<<sum<<endl;
	return 0;
}